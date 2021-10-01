package DSA.week_4.hashing;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;

public class sorting_array_by_frequency {
    public static void main(String[] args) throws NumberFormatException, IOException
    {
        BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(sc.readLine());
        while(n != 0)
        {
            int size = Integer.parseInt(sc.readLine());
            int arr[] = new int[size];
            String[] temp = sc.readLine().trim().split("\\s+");

            for(int i = 0; i < size; i++)
                arr[i] = Integer.parseInt(temp[i]);

            ArrayList<Integer> ans = new ArrayList<Integer>();
            ans = new Solution8().sortByFreq(arr, size);
            for(int i=0;i<ans.size();i++)
                System.out.print(ans.get(i)+" ");
            System.out.println();
            n--;
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution8
{
    //Function to sort the array according to frequency of elements.
    static ArrayList<Integer> sortByFreq(int arr[], int n)
    {
        // add your code here
        HashMap<Integer,Integer> hm=new HashMap<>();
        ArrayList<Integer> arrayList=new ArrayList<>();

        for (int i = 0; i < n; i++) {
            hm.put(arr[i], hm.getOrDefault(arr[i],0)+1);
        }
        for (int i = 0; i < n; i++) {
            arrayList.add(arr[i]);
        }
        Collections.sort(arrayList,
                (n1,n2)->{

            int f1=hm.get(n1);
            int f2=hm.get(n2);
            if(f1!=f2){
                return f2-f1;
            }
            return n1-n2;
                });
        return arrayList;

    }
}
