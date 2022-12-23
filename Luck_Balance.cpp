#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
struct items
{
	int l;
	int t;
};
bool cmp(struct items a, struct items b)
{
	return a.l > b.l ? 0:1;
}
long solve(struct items arr[], int n, int k, long res)
{
	if(k<0)
		return res;
	sort(arr, arr+n, cmp);
	for(int i=0;i<n;i++)
	{
		if(k==0)
			break;
		if(arr[i].t==1)
		{
			k--;
			res = res  - 2*arr[i].l;
		}


	}
	if(k>0)
	{
		for(int i=0;i<n;i++)
		{
			if(k==0)
				break;
			if(arr[i].t==0)
			{
				k--;
				res = res  - 2*arr[i].l;
			}
		}
	}
	return res;
}
int main()
{
	int n,k,c=0;
	long res=0;
	cin >> n >> k;
	struct items arr[n];
	for(int i=0;i<n;i++)
		{
			cin >> arr[i].l >> arr[i].t;
			if(arr[i].t==1)
				c++;
			res = res + arr[i].l;
		}
    //cout << res << endl;
	cout << solve(arr, n,c-k,res)<< endl;
  //cout << c <<' '<< abs(k-c)<< endl;
  //for(int i=0;i<n;i++)
    //cout << arr[i].l << ' ' << arr[i].t << endl;
}