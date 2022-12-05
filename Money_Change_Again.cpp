#include<bits/stdc++.h>
using namespace std;
int solve(int coins[], int N, int m)
{
    int tmp;
	int res[N+1];
	res[0] = 0;
	for(int i=1;i<N+1;i++)
		res[i] = N+1;
	for(int i=1;i<N+1;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(coins[j] <= i)
			{
				res[i]  = min(res[i-coins[j]]+1,res[i]);
			}
		}
	}
	return res[N];

}
int main()
{
    int n;
	int coins[] = {1,3,4};
	cin >> n;
	cout << solve(coins,n,3);
}