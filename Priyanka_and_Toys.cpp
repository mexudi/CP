#include<bits/stdc++.h>
using namespace std;
long solve(vector<long> items)
{
	long res=0,c=0,i=0,count;
	sort(items.begin(),items.end());
	while(i<items.size())
	{
	    res++;
		count = items[i] + 4;
		while(items[i]<= count)
			i++;
			
	}
	return res;
}
int main()
{
	long n,item;
	cin >> n;
	vector<long> items;
	for(long i=0;i<n;i++)
	{
		cin >> item;
		items.push_back(item);
	}
	cout << solve(items);
}