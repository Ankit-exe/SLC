#include<stdio.h>
int check(int);
int main()
{
	int n,c;
	printf("enter a number");
	scanf("%d",&n);
	c=check(n);
	if (c==0)
	{
		printf("it is even");
	}
	else
	{
		printf("it is odd");
	}
}
int check(int n)
{
	int u;
	u=n%2;
	return u;
}
