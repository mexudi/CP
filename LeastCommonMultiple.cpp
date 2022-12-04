#include<iostream>
#include<cstdlib>
long long solve(long long a, long long b)
{
	if (b==0)
		return a;
	else
		return solve(b,a%b);
}
int main()
{
	long long a,b;
	scanf("%lld %lld",&a,&b);
	if(a>b)
	printf("%lld",(a*b)/solve(a,b));
	else
		printf("%lld",(a*b)/solve(b,a));
}