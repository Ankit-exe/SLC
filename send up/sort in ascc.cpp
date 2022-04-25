#include<stdio.h>
struct student{
	char name[20];
	int clas,roll;
};
int main()
{
	struct student s[5],temp;
	int i,j;
	printf("*******details******");
	for(i=0;i<5;i++)
	{
		printf("\nENTER NAME CLASS AND ROLL= ");
		scanf("%s %d %d",&s[i].name,&s[i].clas,&s[i].roll);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(s[i].roll<s[j].roll)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
				
			}
		}
	}
	printf("the sorted form is\n");
	for(i=0;i<5;i++)
	{
		printf("name=%s\n",s[i].name);
		printf("class=%d\n",s[i].clas);
		printf("roll=%d\n",s[i].roll);
		printf("**********\n");
	}
	return 0;
}	


