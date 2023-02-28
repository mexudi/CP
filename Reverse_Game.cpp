#include<bits/stdc++.h>
using namespace std;
int solve(int n, int arr[], int k)
{
	for(int i=0;i<n;i++)
	{
		swap = arr[pos];
		arr[pos] = arr[n-1];
		arr[n-1] = swap;
		pos++;
	}
	return arr[k];
}
int main()
{
	int T,n,k;
}