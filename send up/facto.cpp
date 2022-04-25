#include<stdio.h>
int facto(int n);
int main()
{
	int n,ans;
	printf("enter the number");
	scanf("%d",&n);
	ans=facto(n);
	printf("the required factorial is %d",ans);
}
int facto(int n)
{
	if (n==1)
	{
		return 1;
	}
	else{
		return (n*facto(n-1));
	}
}
