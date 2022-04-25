#include<stdio.h>
int main()
{
	char filenm[15];
	printf("enter file name to remove=");
	gets(filenm);
	if (remove(filenm)==0)
	printf("success");
	else
	printf("failed");
	return 0;
}
