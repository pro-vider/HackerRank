HackerRank problem link : https://www.hackerrank.com/challenges/extra-long-factorials/problem

#include<iostream>
#define MAX 500
using namespace std;

int multiply(int p,int result[],int result_size)
{
	int i,carry=0;
	for(i=0;i<result_size;i++)
	{
		int product = result[i]*p+carry;
		result[i]=product%10;
		carry=product/10;
	}
	while(carry)
	{
		result[result_size]=carry%10;
		carry=carry/10;
		result_size++;
	}
	return result_size;
}

void factorial(int n)
{
	int i=0;
	int result[MAX];
	int result_size=1;
	result[0]=1;
	
	for(i=2;i<=n;i++)
	{
		result_size=multiply(i,result,result_size);
	}
	
	for(i=result_size-1;i>=0;i--)
	{
		cout<<result[i];
	}
}

int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}
