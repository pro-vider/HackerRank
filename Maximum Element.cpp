//Practice => Data Structures => Stacks => Maximum Element
https://www.hackerrank.com/challenges/maximum-element/problem

#include<bits/stdc++.h>
using namespace std;

int main() {
    std::stack<int> st;
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int q;
        scanf("%d", &q);

        switch (q)
        {
        case 1:
            scanf("%d", &x);

            if (st.empty()) {
                st.push(x);
            }
            else {
                st.push(max(x, st.top()));
            }
            break;

        case 2:
            if (!st.empty()) {
                st.pop();
            }
            break;

        case 3:
            printf("%d\n", st.top());
            break;

        default:
            break;
        }
    }

    return 0;
}

