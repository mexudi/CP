#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    int p[n+1];
    for(int i=1;i<n+1;i++)
    {
        cin >> k;
        p[k] = i;
    }
    for(int i=1;i<n+1;i++)
    {
        cout << p[p[i]]<<endl;
    }
}