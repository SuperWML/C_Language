#include <stdio.h>
#include <string.h>
void Left_Reverse_String(char *arr,int sz,int number);

int main (void)
{
	char arr[] = "ABCD";
	char arr2[] = "ABCD";
	int sz = strlen(arr);
	printf("没有左旋之前，字符串是：%s\n",arr);
	Left_Reverse_String(arr,sz,1);
	printf("左旋之后，字符串是：%s\n",arr);
	printf("没有左旋之前，字符串是：%s\n",arr2);
	Left_Reverse_String(arr2,sz,2);
	printf("左旋之后，字符串是：%s\n",arr2);
	return 0;
}
//函数功能：左旋字符串
void Left_Reverse_String(char *arr,int sz,int number)
{
	for(int i = 0;i < number;i++)
	{
		char tmp = arr[0];
		for(int j = 0;j < sz-1;j++)
		{
			arr[j] = arr[j+1];
		}
		arr[sz-1] = tmp;
	}
}
