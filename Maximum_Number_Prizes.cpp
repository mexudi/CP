#include<iostream>
#include<vector>
using namespace std;
void solve(long n, vector<long> arr)
{
  long i=0;
	if(n==1 || n==2)
		 {
       arr.push_back(n);
       cout << arr.size()<< endl;
       for(i=0;i < arr.size();i++)
      cout << arr[i] << ' ';
     }
	else
	{
    arr.push_back(0);
		//arr.push_back(1);
			while(n > arr[i] && n > 0)
			{
				arr.push_back((i+1));
				n = n - (i+1);
        i++;
			}
				arr[i] = arr[i] + n;
        cout << arr.size() - 1 << endl;
        for(i=1;i < arr.size();i++)
      cout << arr[i] << ' ';
	}
  
  
}
int main()
{
	long n;
	cin >> n;
	std::vector<long> arr;
	solve(n,arr);
	//for(int i=0;i<arr.size();i++)
		//cout << arr[i] << ' ';

}