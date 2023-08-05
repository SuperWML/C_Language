#include <stdio.h>
#include <string.h>
void Reverse_Print_Arr(char* arr);
int main (void)
{
	char arr[] = "I am a student";
	Reverse_Print_Arr(arr);
	return 0;
}
//函数功能：逆序打印字符串
void Reverse_Print_Arr(char* arr)
{
	char* left = arr;
	char* right = arr + strlen(arr)-1;
	for(;right >= left;right--)
	{
		printf ("%c",*right);
	}
}
