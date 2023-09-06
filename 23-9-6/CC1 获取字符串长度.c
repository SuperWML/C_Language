#include <stdio.h>
int my_strlen(char* arr);
int main (void)
{
	char arr[10000] = {0};
	char ch = 0;
	int i = 0;
	while(ch = getchar() != '\n')
	{
		arr[i] = ch;
		i++;
	}
	printf ("%d",my_strlen(arr));
	return 0;
}
//函数功能：计算字符串长度
int my_strlen(char* arr)
{
	int count = 0;
	for(int i = 0;*(arr + i);i++)
	{
		count++;
	}
	return count;
}
