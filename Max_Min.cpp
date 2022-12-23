#include<bits/stdc++.h>
using namespace std;
long solve(long n, long k, long arr[])
{
	long max,min,res;
	sort(arr,arr+n);
	for(long i=0;i<=n-k;i++)
	{
		min = arr[i];
		max = arr[i+k-1];
		if((max-min) < res)
			res = max - min;
	}
	return res;
}
int main()
{
	long n,k;
	cin >> n;
	cin >> k;
	long arr[n];
	for(long i=0;i<n;i++)
		cin >> arr[i];
	cout << solve(n,k,arr);
}