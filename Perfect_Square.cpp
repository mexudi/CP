#include<bits/stdc++.h>
using namespace std;
int main(){
	long min=1;
	long max = 1000;
	for(long i=min;i<=max;i++){
		if(sqrt(i)==floor(sqrt(i)))
			cout<<i<<'n';
	}
}