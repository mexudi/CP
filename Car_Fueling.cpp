#include<iostream>
using namespace std;
long solve(long d, long m, long n, long arr[])
{
	long current_stop=0,last_stop,res=0;
	while(current_stop<=n)
	{
		last_stop = current_stop;
		while(current_stop<=n && (arr[current_stop + 1] - arr[last_stop] <= m))
		{
			current_stop++;
		}
		if(current_stop==last_stop)
			return -1;
		if(current_stop<=n)
			res++;
	}
	return res;
}
int main()
{
	long d,m,n;
	scanf("%ld %ld %ld",&d,&m,&n);
	long arr[n+2];
	arr[0] = 0;
	arr[n+1] = d;
	for(long i=1;i<=n;i++)
		scanf("%ld",&arr[i]);
	printf("%ld",solve(d,m,n,arr));
}