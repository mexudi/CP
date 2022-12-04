 #include<bits/stdc++.h>
using namespace std;
int solve(string str1, string str2)
{
     int a = str1.length();
    int b = str2.length();
    int res[b+1][a+1];
    for(int i=0;i<b+1;i++)
    {
        for(int j=0;j<a+1;j++)
        {
            if(i==0)
                res[i][j]=j;
            else if(j==0)
                res[i][j]=i;
            else{
                if(str1[j]==str2[i])
                    {
                        res[i][j] = res[i-1][j-1];
                    }
                else
                    {
                        res[i][j] = min(res[i-1][j-1],min(res[i][j-1],res[i-1][j])) + 1;
                    }
            }
            
        }
    }
    /*for(int i=0;i<b;i++)
    {
        for(int j=0;j<a;j++)
        {
            cout << res[i][j] << ' ';
        }
        cout <<endl;
    }*/
    return res[b][a];
}
int main()
{
    string str1,str2,tmp;
    str1=(" ");
    str2=(" ");
    cin >> tmp;
    str1 = str1 + tmp;
    cin >> tmp;
    str2 = str2 + tmp;
    //cout << str1 << endl << str2;
     cout << solve(str1,str2)<<endl;
}