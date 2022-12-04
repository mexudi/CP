#include<iostream>
#include<algorithm>
using namespace std;
long long solve(long long n,long long a[],long long b[])
{
	long long res=0;
	sort(a,a+n);
	sort(b,b+n);
	for(long long i=0;i<n;i++)
	{
		res = a[i]*b[i] + res;
	}
	return res;
}
int main()
{
	long long n,i;
	scanf("%lld",&n);
  long long a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%lld",&b[i]);
	}
  printf("%lld",solve(n,a,b));
}