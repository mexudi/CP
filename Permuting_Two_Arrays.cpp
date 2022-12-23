#include<bits/stdc++.h>
using namespace std;
long solve(long n,long k, long a[], long b[])
{
	sort(a,a+n);
	sort(b,b+n,greater<long>());
	for(long i=0;i<n;i++)
	{
		if(a[i] + b[i] < k)
			return 0;
	}
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long t,n,k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		long A[n],B[n];
		for(long i=0;i<n;i++)
			cin >> A[i];
		for(long i=0;i<n;i++)
			cin >> B[i];
		if(solve(n,k,A,B)==1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

}