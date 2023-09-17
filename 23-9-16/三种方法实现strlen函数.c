#include <stdio.h>

int My_strlen1(char* arr);
int My_strlen2(char* arr);
int My_strlen3(char* arr);

int main (void)
{
	char arr[] = "hello bit";
	printf ("%d\n",My_strlen1(arr));
	printf ("%d\n",My_strlen2(arr));
	printf ("%d\n",My_strlen3(arr));
	
	return 0;
}

//函数功能：方法1，计数实现strlen函数
int My_strlen1(char* arr)
{
	int count = 0;
	while(*arr++)
	{
		count++;
	}
	return count;
}

//函数功能：递归实现strlen函数
int My_strlen2(char* arr)
{
	if(*arr == '\0')
	{
		return 0;
	}
	else
	{
		return 1+My_strlen2(++arr);
	}
}

//函数功能：指针相减实现strlen函数
int My_strlen3(char* arr)
{
	char* start = arr;
	while(*arr)
	{
		arr++;
	}
	return arr - start;
}
