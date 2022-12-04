#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int cmp(string a, string b)
{
	string ab = a.append(b);
	string ba = b.append(a);
	return ab.compare(ba) > 0 ? 1 : 0;
}
void solve(vector<string> arr)
{
	sort(arr.begin(), arr.end(), cmp);
	for(int i=0;i<arr.size();i++)
		cout << arr[i];
}
int main()
{
	int n;
	cin >> n;
	vector<string> arr;
	string nbr;
	for(int i=0;i<n;i++)
	{
		cin >> nbr;
		arr.push_back(nbr);
	}
  solve(arr);
}