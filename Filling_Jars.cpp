#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,x,y,k,res=0;
    cin >> n >> m;
    for(long long i=0;i<m;i++)
    {
        cin >> x >> y >> k;
        res = (y-x+1)*k + res;
    }
    res = 1.0*res/n;
    res = round(res);
    cout << res;
}
