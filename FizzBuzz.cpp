#include<bits/stdc++.h>
using namespace std;
void solve(long n)
{
	long i;
	for(i=1;i<=n;i++)
	{
		if(i%5==0 && i%3==0)
			cout <<"FizzBuzz" << endl;
		else if(i%5==0 && i%3!=0)
			cout << "Buzz" << endl;
		else if(i%5!=0 && i%3==0)
			cout << "Fizz" <<endl;
		else
			cout << i << endl;
	}
}
int main()
{
	long n;
	cin >> n;
	solve(n);
}