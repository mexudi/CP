#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n<10)return n;
    long res=0;
    while(n>0){
        res+=n%10;
        n/=10;
    }
    return res;
}
int main()
{
	int n,res,max=0,tmp;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			tmp = solve(i);
			if(tmp > max)
			{
				max = tmp;
				res = i;
			}
		}
	}
	cout << res;
}