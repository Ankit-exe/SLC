#include<stdio.h>
int main()
{
	char name[10];
	int clas,roll,i,n;
	FILE*fp;
	fp=fopen("data.txt","w");
	printf("ENETER NO OF DATA YOU WANT TO STORE");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter name");
		scanf("%s",&name);
		printf("enter class");
		scanf("%d",&clas);
		printf("enter ROll");
		scanf("%d",&roll);
		fprintf(fp,"%s\t%d\t%d\n",name,clas,roll);
	}
	fclose(fp);
	fp=fopen("data.txt","r");
	while(fscanf(fp,"%s%d%d",&name,&clas,&roll)!=EOF)
	{
		printf("name=%s\tclass=%d\troll=%d\n",name,clas,roll);
	}
	fclose(fp);
	return 0;
}


