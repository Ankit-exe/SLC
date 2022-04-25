#include<stdio.h>
int main()
{
	char name[20],post[10];
	int salary,i;
	FILE*fp;
	fp=fopen("salary.txt","w");
	for(i=1;i<=4;i++)
	{
		printf("ENTER NMAE=");
		scanf("%s",&name);
		printf("ENTER POST");
		scanf("%s",&post);
		printf("ENTER SALARY");
		scanf("%d",&salary);
		fprintf(fp,"\n%s\t%s\t%d",name,post,salary);
	}
	fclose(fp);
	return 0;
}
