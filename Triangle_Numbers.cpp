#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		if(n%2==0)
		{
			if(n%4==0)
				cout<<'3'<<ednl;
			else
				cout<<'4'<<endl;
		}
		else
			cout<<'2'<<endl;
	}
}