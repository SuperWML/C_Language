//#include <stdio.h>
//#include <string.h>
//void swap(char* arr1,char* arr2);
//int main (void)
//{
//	char arr[10000] = {0};
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while(left < right)
//	{
//		swap(arr+left,arr+right);
//		left++;
//		right--;
//	}
//	//puts(arr);
//	left = 0;
//	right = 0;
//	while(arr[right] != '\0')
//	{
//		int tmp = 0;
//		if(arr[right] == ' ')
//		{
//			tmp = right;
//			while(left < right-1)
//			{
//				swap(arr+left,arr+right-1);
//				left++;
//				right--;
//			}
//			left = tmp + 1;
//			right = tmp;
//		}
//		right++;
//	}
//	puts(arr);
//}
////函数功能：交换数组中的元素
//void swap(char* arr1,char* arr2)
//{
//	char tmp = *arr1;
//	*arr1 = *arr2;
//	*arr2 = tmp;
//}
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main (void)
{
	char s[10000];
	gets(s);
	int len = strlen(s);
	int p1 = len-1,p2 = len;
	while(p1 >= 0)
	{
		while(p1 >= 0 && !isalpha(s[p1]))
		{
			p1--;
		}
		p2 = p1;
		while(p1 >= 0 && isalpha(s[p1]))
		{
			p1--;
		}
		for(int i = p1 + 1;i <= p2;i++)
		{
			printf ("%c",s[i]);
		}
		printf (" ");
	}
	
	return 0;
}
