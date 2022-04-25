#include<stdio.h>
struct student{
	char name[20];
	int clas;
	float weight;
};
int main()
{
	struct student s1;
	printf("enter name");
	scanf("%s",&s1.name);
	printf("enter class");
	scanf("%d",&s1.clas);
	printf("enter weight");
	scanf("%f",&s1.weight);
	printf("-----------details--------\n");
	printf("name=%s\n",s1.name);
	printf("class=%d\n",s1.clas);
	printf("weight=%f\n",s1.weight);
	
}
