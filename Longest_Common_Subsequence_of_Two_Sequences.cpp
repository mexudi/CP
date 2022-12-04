#include<bits/stdc++.h>
using namespace std;
long solve(long n, long A[], long m, long B[])
{
	long res[m+1][n+1];
	for(long i=0;i<m+1;i++)
	{
		for(long j=0;j<n+1;j++)
		{
			if(i==0)
				res[i][j] = 0;
			else if(j==0)
				res[i][j] = 0;
			else
			{
				if(B[i]!=A[j])
					res[i][j] = max(res[i][j-1],res[i-1][j]);
				else
					res[i][j] = res[i-1][j-1] + 1;
			}
		}
	}
	/*for(int i=0;i<m+1;i++)
	{
	    for(int j=0;j<n+1;j++)
	    {
	        cout << res[i][j] << ' ';
	    }
	    cout <<endl;
	}*/

	return res[m][n];

}
int main()
{
	long n,m;
	cin >> n;
	long A[n+1];
	A[0] = 0;
	for(long i=1;i<n+1;i++)
		cin >> A[i];
	cin >> m;
	long B[m+1];
	B[0] = 0;
	for(long i=1;i<m+1;i++)
		cin >> B[i];
	cout << solve(n,A,m,B);
}