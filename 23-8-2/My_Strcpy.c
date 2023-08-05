#include <stdio.h>
char* My_Strcpy(char* dest,const char* source);
int main (void)
{
	char arr1[] = "hello";
	char arr2[] = "world";
	
	printf ("使用My_Strcpy函数之前，arr1的值是:%s\n",arr1);
	printf ("使用My_Strcpy函数之后，arr1的值是:%s",My_Strcpy(arr1,arr2));
	
	return 0;
}
//函数功能：自己模仿的strcpy函数
char* My_Strcpy(char* dest,const char* source)
{
	char* ret = dest;
	while(*dest++ = *source++)
	{
		;
	}
	return ret;
}
