#include<iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
vector<long long> arr;
long long solve(long long m)
{
	long long c,i,a=0,b=1,mod;
	arr.push_back(0);
	arr.push_back(1);
	c = a + b;
	for(i=0;i<m*m;i++)
	{
		c = (a+b)%m;
		arr.push_back(c);
		a  = b;
		b = c;
		if(a==0 && b==1)
		    return i+1;
	}
}
int main()
{
	long long m,x,mod,i;
	scanf("%lld %lld",&x,&m);
	i = solve(m);
	mod = x%i;
	printf("%lld\n",arr[mod]);
}