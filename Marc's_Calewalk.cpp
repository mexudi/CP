#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;
int solve(int n, int arr[])
{
	int i,res=0;
	sort(arr, arr + n, greater<int>());
	for(i=n-1;i>=0;i--)
	{
		res = res + pow(2,i)*arr[i];
	}
	return res;
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	cout << solve(n,arr) << endl;
}