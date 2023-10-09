#include <stdio.h>
int main (void)
{
//	FILE* fp;
//	fp = fopen("abc","r");
//	if(fp == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	else
//	{
//		printf ("\a成功打开了文件\"abc\"。\n");
//		fclose(fp);
//		fp = NULL;
//	}
	FILE* fp;
	char name[10] = {0};
	scanf("%s",name);
	fp = fopen(name,"r");
	if(fp == NULL)
	{
		printf ("该文件不存在\n");
	}
	else
	{
		printf ("该文件存在\n");
	}
	return 0;
}
