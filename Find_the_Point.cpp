#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,px,py,qx,qy,cx,cy;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> px >> py >> qx >> qy;
        cx = (qx-px) + qx;
        cy = (qy-py) + qy;
        cout << cx << ' ' << cy << '\n';
    }
}