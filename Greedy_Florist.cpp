#include<bits/stdc++.h>
using namespace std;
long solve(long m, long n, long arr[])
{
	sort(arr,arr+n,greater<long>());
	long i,c=1,sum=0;
	for(i=0;i<n;i++)
	{
		if(i%m==0 && i!=0)
			c++;
		sum = sum + c*arr[i];
	}
	return sum;
}
int main()
{
	long n,m;
	cin >> n >> m;
	long arr[n];
	for(long i=0;i<n;i++)
		cin >> arr[i];
	cout << solve(m,n,arr);
}