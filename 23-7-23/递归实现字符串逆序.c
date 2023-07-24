#include <stdio.h>
#include <string.h>
void reverse_string(char * string);
//这个题要不是看了答案，我自己根本想不到:(
int main (void)
{
	char arr[] = "abcdef";
	printf ("逆序之前的字符串是:%s\n",arr);
	reverse_string(arr);
	printf ("逆序之后的字符串是:%s\n",arr);
	return 0;
}
//函数功能：递归实现字符串逆序
void reverse_string(char * string)
{
	char temp = *string;
	int len = strlen(string);
	*string = string[len-1];
	string[len-1] = '\0';
	if(strlen(string+1) >= 2)
	{
		reverse_string(string+1);
	}
	string[len-1] = temp;
}
