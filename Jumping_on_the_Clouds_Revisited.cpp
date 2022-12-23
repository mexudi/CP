#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,e=100,x=0;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i=x)
    {
        // cout <<'#'<< i <<endl;
        if(arr[x]==1)
        {
            e = e - 3;
        }
        else
            e-=1;
        x = (i+k)%n;
        
        //cout << x << ' ' << e << endl;
        if(x==0)
            break;
    }
    cout << e;
}