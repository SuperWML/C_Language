#include <stdio.h>
#include <string.h>
void sort_arr(char* arr,int sz);
#define MAX 1000
int main (void)
{
	char arr[MAX] = {0};
	scanf("%s",arr);
	int sz = strlen(arr);
	sort_arr(arr,sz);
	printf ("%s",arr);
	return 0;
}
//函数功能：把字符串中的元素按ASCII码排序
void sort_arr(char* arr,int sz)
{
	char tmp = 0;
	for(int i = 0;i < sz-1;i++)
	{
		for(int j = i+1;j < sz;j++)
		{
			if(arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
