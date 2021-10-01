#include<bits/stdc++.h>

using namespace std;

void rev(int arr[],int i,int j)
{
    int t;
    while(i<j)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;
    }
}

int main() {
    int n,d;
    cin>>n >>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rev(arr,0,d-1);
    rev(arr,d,n-1);
    rev(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] <<" ";
    }    
   
   
    return 0;
}