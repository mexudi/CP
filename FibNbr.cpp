#include<iostream>
#include<cstdlib>
long long Fib(long long n)
{
	long long F[n+1];
	F[0] = 0;
	F[1] = 1;
	for(long long i=2;i<=n;i++)
		F[i] = F[i-1] + F[i-2];
	return F[n];
}
int main()
{
	long long n,res;
	scanf("%lld",&n);
	long long F[n+1];
	res = Fib(n);
	printf("%lld",res);
}