#include <bits/stdc++.h>

using namespace std;
 void solve(){

 }
 int main(){
     int n,k,q,x;
     cin >> n >> k >> q;
     int a[n],res[n],arr[q];
     for(int i=0;i<n;i++){
         cin >> a[i];
         res[(i+k)%n] = a[i];
     }
     for(int i=0;i<q;i++)
        cin >> x;
         cout << res[x] <<'\n';
 }