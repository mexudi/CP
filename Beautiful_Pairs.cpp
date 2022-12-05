#include<bits/stdc++.h>
using namespace std;
void solve(long n, long arr[])
{
	sort(arr,arr+n);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin >> n;
    long arr[2*n];
    for(int i=0;i<2*n;i++)
    	cin >> arr[i];
    solve(n,arr);
    for(int i=0;i <n;i++)
    	cin >> arr[i];
}