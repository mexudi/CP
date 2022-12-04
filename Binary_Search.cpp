#include<bits/stdc++.h>
using namespace std;
long solve(long n,long arr[],long key)
{
	long max,min,guess;
	min = 0;
	max  = n - 1;
	while(max>=min)
	{
		guess = (max+min)/2;
		if(key==arr[guess])
			return guess;
		else if(arr[guess] > key)
			max = guess - 1;
		else
			min = guess + 1;
	}
	return -1;
}
int main()
{
	long n,k,key;
	cin >> n;
	long a[n];
	for(long i=0;i<n;i++)
		cin >> a[i];
	cin >> k;
	long b[k];
	for(long i=0;i<k;i++)
	{
	    cin >> key;
	    cout << solve(n,a,key)<< ' ';
	}
	
}