#include <stdio.h>
////方法一：递归实现strlen
//int My_Strlen(char * arr);
//int main (void)
//{
//	char arr[] = "abcd";
//	printf ("字符串%s的长度是%d",arr,My_Strlen(arr));
//}
////函数功能：递归实现strlen()函数
//int My_Strlen(char * arr)
//{
//	if(*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1+My_Strlen(arr+1);
//	}
//}
//方法二：非递归实现strlen（）函数
int main (void)
{
	char arr[] = "abcd";
	int count = 0;
	for(int i = 0;arr[i] != '\0';i++)
	{
		count++;
	}
	printf ("字符串%s的长度是%d",arr,count);
}
