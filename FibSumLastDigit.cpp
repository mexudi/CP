#include<iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
long long solve(long long n)
{
    long long arr[n],sum=1;
    if(n==0)
    return 0;
    arr[0] = 0;
    arr[1] = 1;
    for(long long i=2;i<=n;i++)
    {
        arr[i] = (arr[i-1] + arr[i-2])%10;
        sum = (sum + arr[i])%10;
    }
    return sum;
}
int main()
{
    long long n,res;
    scanf("%lld",&n);
    res  = solve(n);
    printf("%lld",res);
}