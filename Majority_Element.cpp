#include<bits/stdc++.h>
using namespace std;
long solve(int n, int arr[])
{
	sort(arr,arr+n);
	int count=1,tmp=arr[0],ele,max_ele=-1,check=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==tmp)
			count++;
		else
		{
			count=1;
			tmp = arr[i];
		}
		if(max_ele < count)
		{
			max_ele = count;
			ele = arr[i];
			if(max_ele>(n/2))
				{
					check=1;
					break;
				}
		}

	}
	return (check==1 ? 1 : 0);
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	cout << solve(n,arr);
}