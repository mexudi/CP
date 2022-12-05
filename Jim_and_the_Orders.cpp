#include<bits/stdc++.h>
using namespace std;
typedef struct ans{
	long id;
	long ord;
	long prep;
	long time;

}ans;
bool cmp(ans a, ans b)
{
	return a.time<b.time ? 1:0;
}
void solve(long t, ans arr[])
{
	sort(arr,arr+t,cmp);
	for(long i=0;i<t;i++)
	{
		cout << arr[i].id << ' ';
	}
}
int main()
{
	long t;
	cin >> t;
	ans arr[t];
	for(long i=0;i<t;i++)
	{
		cin >> arr[i].ord;
		cin >> arr[i].prep;
		arr[i].time = arr[i].ord + arr[i].prep;
		arr[i].id = i+1;
	}
	solve(t,arr);
}