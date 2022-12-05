#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,n,m,sum,res,mod;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		if(n > m)
		{
			res = n/m;
			mod = n%m;
			sum = res*(n*(n+1))/2 + (mod*(mod+1))/2;
		}
		else if( n < m)
			sum = (n*(n+1))/2;
		else if(n==m)
			sum = (n*(n-1))/2;
		cout << sum << endl;
	}
}