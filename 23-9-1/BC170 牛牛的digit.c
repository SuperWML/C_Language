#include <stdio.h>
#include <string.h>
void print_digit(char arr[],int len,int i);
int main (void)
{
	char arr[10000] = {0};
	scanf("%s",arr);
	int i = 0;
	scanf("%d",&i);
	int len = strlen(arr);
	print_digit(arr,len,i);
	return 0;
}
//函数功能：打印digit字符串
void print_digit(char arr[],int len,int i)
{
	for(int j = len-i;j<len;j++)
	{
		printf ("%c",*(arr+j));
	}
}
