#include<bits/stdc++.h>
long solve(long k)
{
	long x,y;
	x = k/2;
	y = k - x;
	return x*y;
}
int main()
{
	long t,k;
	cin >> t;
	while(t--)
	{
		cin >> k;
		cout << solve(k)<< endl;
	}
}