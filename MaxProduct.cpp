#include<iostream>
#include<cstdlib>
long long FindMax(long long n,long long arr[])
{
    long long max1=0,max2=0,max_index;
        for(long long j=0;j<n;j++)
        {
            if(arr[j] > max1)
            {
                max1  = arr[j];
                max_index = j;
            }
        }
        for(long long j=0;j<n;j++)
        {
            if(arr[j] > max2 && max_index!=j)
            {
                max2  = arr[j];
            }
        }
    return max2*max1;
    
}
int main()
{
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    for(long long i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long res = FindMax(n,arr);
    printf("%lld",res);
}
