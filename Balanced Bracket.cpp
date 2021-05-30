//Practice => DataStructures => Stacks => Balanced Brackets
https://www.hackerrank.com/challenges/balanced-brackets/problem
#include<bits/stdc++.h>
using namespace std;

bool isvalid(string s);
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
        
        cin>>s;
        if(isvalid(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;    
    }
    return 0;
}
bool isvalid(string s)
{
    stack <char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
        else if(s[i]==')')
        {
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }   
         else if(s[i]=='}')
        {
            if(!st.empty() && st.top()=='{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        } 
         else if(s[i]==']')
        {
            if(!st.empty() && st.top()=='[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }  
    }
    if(st.empty())
    {
       // cout<<'a';
        return true;
       
    }
    else
    {
        return false;
    }
}
