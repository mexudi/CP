#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
long solve(long a)
{
    long cnt=0,res=a;
    for(int i=0;i<log(res);i++){
        long nbr = a%10;
        a = a/10;
        //cout << "#"<<i<<' '<<nbr<<' '<<a<<'/'<<'\n';
        if(nbr==0){
            continue;
        }
        
        if(res%nbr==0 || nbr==1)
            cnt++;
        
    }
    return cnt;
}
int main(){
    long t,a;
    cin>>t;
    while(t--){
        cin>>a;
        cout << solve(a)<<'\n';
    }
}
