#include<stdio.h>
void mul(int);
int main()
{
	int n,s;
	printf("enter a number");
	scanf("%d",&n);
	mul(n);
}
void mul(int n)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",n,i,n*i);
    }
	
}
