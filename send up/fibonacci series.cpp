//fibonacci series 1 1 2 3 5//


#include<stdio.h>
int fibo(int i);
int main()
{
	int i,n;
	printf("enter value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	printf("%d\t",fibo(i));
}
int fibo(int i)
{
	if(i==0)
	return 0;
	else if(i==1)
	return 1;
	else 
	return fibo(i-1)+fibo(i-2);
}
