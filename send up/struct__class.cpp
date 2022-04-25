#include<stdio.h>
struct student{
	char name[20];
	int roll,clas;
};
int main()
{
	int i;
	struct student s[5];
	printf("******details*****\n");
	for(i=0;i<5;i++)
	{
		printf("ENTER NAME= ");
		scanf("%s",&s[i].name);
		printf("ENTER ROLL= ");
		scanf("%d",&s[i].roll);
		printf("ENTER CLASS= ");
		scanf("%d",&s[i].clas);
		printf("***********\n");
	}
	printf("-----------details-----------\n");
	for(i=0;i<5;i++)
	{
		if (s[i].clas==12)
		{
			printf("name=%s\n",s[i].name);
			printf("roll=%d\n",s[i].roll);
			printf("class=%d\n",s[i].clas);
			printf("****************");
		}
	}
	return 0;
}
