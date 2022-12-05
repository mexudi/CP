#include<bits/stdc++.h>
using namespace std;
long solve(string str, long n)
{
	long lvl=0,c=0;
	for(long i=0;i<n;i++)
	{
		if(str[i]=='U')
			lvl--;
		else
			lvl++;
		if(str[i]=='U' && lvl==0)
			c++;
	}
	return c;
}
int main()
{
	long n;
	string str;
	cin >> str;
	cout >> solve(str,n);
}