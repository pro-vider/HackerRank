class TreeNode:
   def __init__(self, value):
      self.val = value
      self.left = None
      self.right = None
class Solution:
   def solve(self, root):
      if root is None:
         return 0
      self.res = float("-inf")
      self.utils(root)
      return self.res
   def utils(self, root):
      if root is None:
         return 0
      l = self.utils(root.left)
      r = self.utils(root.right)
      max_single = max(max(l, r) + root.val, root.val)
      max_top = max(max_single, l + r + root.val)
      self.res = max(self.res, max_top)
      return max_single
ob = Solution()
root = TreeNode(13)
root.left = TreeNode(12)
root.right = TreeNode(14)
root.right.left = TreeNode(16)
root.right.right = TreeNode(22)
root.right.left.left = TreeNode(4)
root.right.left.right = TreeNode(7)
print(ob.solve(root))
