#include <iostream>
int main()
{
	int coins[3] = {10,5,1};
	int n,res=0;
	scanf("%d",&n);
	for(int i=0; i<3;i++)
	{
		res = res + n/coins[i];
		n = n%coins[i];
	}
	printf("\n%d",res);
}