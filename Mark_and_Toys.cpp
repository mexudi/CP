#include<bits/stdc++.h>
using namespace std;
long solve(long n,long arr[],long k)
{
    long sum=0,i=0;
    sort(arr,arr+n);
    while(sum < k)
    {
        sum = sum + arr[i];
        i++;
    }
    return i-1;
}
int main()
{
    long n,k;
    cin >> n >> k;
    long arr[n];
    for(long i=0;i<n;i++)
        cin >> arr[i];
    cout << solve(n,arr,k);
}