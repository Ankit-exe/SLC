#include<stdio.h>
int power(int,int);
int main()
{
	int x,y,z;
	printf("enter value of x and y");
	scanf("%d %d",&x,&y);
	z=power(x,y);
	printf("the req ans is %d",z);
}
int power(int x, int y)
{
	int s,i;
	for(i=1;i<=y;i++)
	{
		x=x*x;
		y=y-1;
		
	}
return x;
}
