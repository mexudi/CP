#include<bits/stdc++.h>
using namespace std;
long solve(long arr[], long n)
{
	long i=0,c=0,res=0;
	while(i<n)
	{
		if(arr[i]!=arr[i+1])
			{
				i = i + 2;
				res++;
				if(c!=0)
				{
					res = res + c/2;
				}
			}
		else if(arr[i]==arr[i+1])
			{
				c++;
				i++;
			}
	}
	return res;

}
int main()
{
	long n;
	cin >> n;
	long arr[n];
	for(long i=0;i<n;i++)
		cin >> arr[i];
}