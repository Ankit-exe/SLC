#include<stdio.h>
int check(int);
int main()
{
	int n,d;
	printf("enter a number");
	scanf("%d",&n);
	d=check(n);
	if (d==2)
	{
		printf("it is prime");
	}
	else
	{
		printf("composite");
	}
}
int check (int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			c=c+1;
		}
	}
	return c;
}
