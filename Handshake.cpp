#include<iostream>
using namespace std;
long solve(int n)
{
	long sum=0;
	for(int i=1;i<n;i++)
		sum = sum + i;
	return sum;
}
int main()
{
	long long t,n;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> n;
		cout <<solve(n) << endl;
	}
}