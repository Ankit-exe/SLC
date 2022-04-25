#include<stdio.h>
int main()
{
	char oldname[15],newname[15];
	printf("enter old file name to rename=");
	gets(oldname);
	printf("enter new name to rename=");
	gets(newname);
	if (rename(oldname,newname)==0)
	printf("success");
	else
	printf("failed");
	return 0;
}
