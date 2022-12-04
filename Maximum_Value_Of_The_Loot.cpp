#include<iostream>
#include <algorithm> 
using namespace std;
struct Item 
{
	long value, weight;
};
bool cmp(struct Item a, struct Item b)
{
	double r1 = (double)a.value / (double)a.weight;
	double r2 = (double)b.value / (double)b.weight;
	return r1 > r2;
}
float solve(long n, long W, struct Item arr[])
{
	long a;
	double V;
	sort(arr, arr + n, cmp);
	for(long i=0;i<n;i++)
	{
		if(W==0)
			break;
		if(arr[i].weight > 0)
		{
			a = min(arr[i].weight,W);
			V = V + (double)1.0*a*arr[i].value/arr[i].weight;
			arr[i].weight = arr[i].weight - a;
			W = W - a; 
		}
	}
	return V;
}
int main()
{
	long n,W;
	scanf("%ld %ld",&n,&W);
	struct Item arr[n];
  for(long i=0;i<n;i++)
  {
    scanf("%ld %ld",&arr[i].value, &arr[i].weight);
  }
  printf("%.4f",solve(n,W,arr));
	
}