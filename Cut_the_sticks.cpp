#include<bits/stdc++.h>
using namespace std;


void solve(int arr[], int n)
{
	int c=0,res=n;
	cout << n <<endl;
	for(int i=0;i<n;i++)
	{
		c=1;
		while(arr[i]==arr[i+1])
		{
			c++;
			i++;
		}
      res = res - c;
      if(res)
		cout << res << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	solve(arr,n);
}