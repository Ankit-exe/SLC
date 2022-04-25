#include<stdio.h>
int peri(int,int);
int main()
{
	int l,b,p;
	printf("enter length and breadth");
	scanf("%d%d",&l,&b);
	p=peri(l,b);
	printf("the required perimeter is %d",p);
}
int peri(int l,int b)
{
	int s;
	s=2*(l+b);
	return s;
}

