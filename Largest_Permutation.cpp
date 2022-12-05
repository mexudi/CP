#include<bits/stdc++.h>
using namespace std;
void solve(long n, long k, long arr[])
{
    long max,swap, max_index;
	for(long i=0;i<n;i++)
	{
		max = arr[i];
		for(long j=i+1;j<n;j++)
		{
			if(max < arr[j])
				{
				    max = arr[j];
				    max_index = j;
				}
		}
		swap = arr[i];
		arr[i] = max;
		arr[max_index] = swap;
		k--;
		if(k==0)
			break;
	}
	for(long i=0;i<n;i++)
		cout << arr[i] << ' ';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,k;
    cin >> n >> k;
    long a[n];
    for(long i=0;i<n;i++)
    {
        cin >> a[i];
    }
    solve(n,k,a);
}
/*
5 2
4 2 3 5 1
*/