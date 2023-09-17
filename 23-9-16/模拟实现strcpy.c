#include <stdio.h>
char* My_strcpy(char* dest,const char* src);
int main (void)
{
	char arr[10] = {0};
	char* arr2 = "hello bit";
	printf ("%s\n",My_strcpy(arr,arr2));
	printf ("%s\n",arr);
}
//函数功能，自己实现的strcpy功能
char* My_strcpy(char* dest,const char* src)
{
	char* start = dest;
	while(*dest++ = *src++);
	return start;
}
