#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long const mod = 1e9 + 7;
ll solve(ll n)
{
    return ((n*(n+1))/2 + (1-n))%mod;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll T,n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        cout << solve(n%mod) << '\n';
    }    
}