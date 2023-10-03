#include <stdio.h>
int My_strcmp(const char* str1,const char* str2)
{
	while(*str1 == *str2 && *str1 && *str2)
	{
		str1++;
		str2++;
	}
	return *str1 - *str2;
}
int main (void)
{
	char arr[] = "abc";
	char arr2[] = "abc";
	if(My_strcmp(arr,arr2) > 0)
	{
		printf (">");
	}
	else if(My_strcmp(arr,arr2) < 0)
	{
		printf ("<");
	}
	else
	{
		printf ("==");
	}
}
