#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
struct points
{
	long a,b;
};
bool cmp(struct points x, struct points y)
{
	long r1 = x.a;
	long r2 = y.a;
	return r1 < r2;
}
long solve(long n, struct points x[],long pts[])
{
	long res=0,last_point,curr_point =0,i=0;
	  sort(x,x+n,cmp);
    for(curr_point=0;curr_point<n;curr_point++)
    {
      last_point = curr_point;
      while(x[curr_point+1].a <= x[last_point].b)
      {
        curr_point++;
      }
      pts[i] = x[curr_point].a;
      i++;
      res++;
    }
    printf("\n");
	 return res;
}
int main()
{
	long n,i,res;
	scanf("%ld",&n);
	struct points x[n];
  long pts[n];
	for(i=0;i<n;i++)
	{
		scanf("%ld %ld",&x[i].a,&x[i].b);
	}
  res = solve(n,x,pts);
  printf("%ld\n",res);
  for(i=0;i<res;i++)
    cout<< pts[i] << ' ';
  
  return 0;
}