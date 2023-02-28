#include<bits/stdc++.h>
using namespace std;
long solve(long a, long b)
{
	long prod = a*b,last=1;
	for(long i=2;i<prod;i++)
	{
		if(prod%(i*i)==0)
			if((i*i)>last)
				last = i*i;
	}
	return prod/last;
}
int main()
{
	long T,a,b;
	cin >> T;
	for(long i=0;i<T;i++)
	{
		cin >> a >> b;
		cout << solve(a,b)<<'\n';
	}

}