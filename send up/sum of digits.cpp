#include<stdio.h>
int sum(int);
int main()
{
	int n,c;
	printf("enter a number");
	scanf("%d",&n);
	c=sum(n);
	printf("sum is %d",c);
	
}
int sum(int n)
{
	int s,d=0;
	while (n>0)
	{
	s=n%10;
	d=d+s;
	n=n/10;
   }
   return d;
	
}
