#include<stdio.h>
int main()
{
	FILE*fp;
	int salary,ch;
	char name[20],
	     post[20];
	fp=fopen("data.txt","w");
	ch:
		printf("\n ENTER NAME");
		scanf("%s",&name);
		printf("\ENTER POST");
		scanf("%s",&post);
		printf("\ENTER SALARY");
		scanf("%d",&salary);
		fprintf(fp,"/n%s\t%s\t%d",name,post, salary);
		printf("DO YOU WANT TO CONTINUE? ||yes=1|| ");
		scanf("%d",&ch);
		if (ch==1)
		{
		goto ch;
	    }
		else
		{
		fclose(fp);
		}
	return 0;
}
