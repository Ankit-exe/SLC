#include<stdio.h>
void mat (int a[][50],int b[][50],int m,int n);
int main()
{
	int a[50][50],b[50][50],i,j,m,n;
	printf("enter the no of rows");
	scanf("%d",&m);
	printf("enter no of colomn");
	scanf("%d",&n);
	printf("Element of 1st matrix=");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Element of 2nd matrix=");
	for(i=0;i<m;i++)
	{
		for(j=0;i<n;j++)
		scanf("%d",&b[i][j]);
	}
	mat(a,b,m,n);
}
void mat(int a[][50],int b[][50],int m,int n)
{
	int i,j;
	printf("the sum is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
			printf("/n");
		}
	}
}
