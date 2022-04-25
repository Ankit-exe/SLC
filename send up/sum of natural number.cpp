#include<stdio.h>
int sum(int);
int main()
{
	int n,m;
	printf("enter a number");
	scanf("%d",&n);
	m=sum(n);
	printf("the sum is %d",m);
	
}
int sum(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		s=s+i;
	}
	return s;
}
