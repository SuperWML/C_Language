#include <stdio.h>
char* My_strcat(char* str1,const char* str2)
{
	char* ret = str1;
	while(*str1 != '\0')
	{
		str1++;
	}
	while(*str1 = *str2)
	{
		str2++;
		str1++;
	}
	return ret;
}
int main (void)
{
	char arr1[20] = "abc";
	char arr2[] = "def";
	printf ("%s",My_strcat(arr1,arr2));
	return 0;
}
