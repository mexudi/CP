#include<bits/stdc++.h>
using namespace std;
typedef struct coord{
    long x,y;
}coord;
void  solve(coord arr[], long n)
{
    long long max_x=arr[0].x,min_x=arr[0].x,y_b=arr[0].y,y_a=arr[0].y;
    long long max_y=arr[0].y,min_y=arr[0].y,x_b=arr[0].x,x_a=arr[0].x;
    for(long long i=1;i<n;i++)
    {
        if(arr[i].x > max_x)
            {
                max_x = arr[i].x;
                y_a = arr[i].y;
            }
        if(arr[i].y > max_y)
            {
                max_y = arr[i].y;
                x_a = arr[i].x;
            }
        if(arr[i].x < min_x)
            {
                min_x = arr[i].x;
                y_b = arr[i].y;
            }
        if(arr[i].y < min_y)
            {
                min_y = arr[i].y;
                x_b = arr[i].x;
            }
    }
    double mx=max(abs(max_x-min_x),abs(min_y-max_y));
        double res1=sqrt(max_x*max_x+max_y*max_y); 
        double res2=sqrt(min_x*min_x+max_y*max_y);    
        double res3=sqrt(min_x*min_x+min_y*min_y);
        double res4=sqrt(max_x*max_x+min_y*min_y);  
     printf("%.10f",max(mx,max(res1,max(res2,max(res3,res4)))));
}
int main()
{
    long n;
    cin >> n;
    coord arr[n];
    for(long i=0;i<n;i++)
    {
        cin >> arr[i].x >> arr[i].y;
    }
    solve(arr,n);
    //cout << solve(arr,n);
}