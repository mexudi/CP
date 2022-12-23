#include<iostream>
using namespace std;
int solve(int n)
{
	return n+1;
}
int main()
{
	int t,n;
	cin >> t;
	for(int i=0;i<t;i++)
		{
			cin >> n;
			cout << solve(n)<< endl;
		}
}