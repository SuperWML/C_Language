#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char* Reverse_String(char *arr,int sz,int number,int judge);
bool Judge_Reverse_String(char* before_arr,char* now_arr,int number,int sz,int judge);

int main (void)
{
	char arr1[] = "AABCD";
	char arr2[10] = "BCDAA";
	int sz = strlen(arr1);
	//strcpy(arr2,Reverse_String(arr1,sz,2,1));
	printf ("第一个字符串是：%s\n"
		"第二个字符串是：%s\n",arr1,arr2);
	if(Judge_Reverse_String(arr1,arr2,2,sz,1))
	{
		printf ("字符串被旋转了\n");
	}
	else
	{
		printf ("字符串没有被旋转\n");
	}

	return 0;
}

//函数功能：旋转字符串字符串,0代表右旋，1代表左旋
char* Reverse_String(char *arr,int sz,int number,int judge)
{
	char* ret = arr;
	if(1 == judge)
	{
		for(int i = 0;i < number;i++)
		{
			char tmp = ret[0];
			for(int j = 0;j < sz-1;j++)
			{
				ret[j] = ret[j+1];
			}
			ret[sz-1] = tmp;
		}
	}
	else
	{
		for(int i = 0;i < number;i++)
		{
			char tmp = ret[sz-1];
			for(int j = sz-2;j >= 0;j--)
			{
				ret[j+1] = ret[j];
			}
			ret[0] = tmp;
		}
	}
	return ret;
}

//函数功能：判断是否翻转了字符串，翻转了得1，否则是0,before_arr是旋转之前得字符串，now_arr是旋转之后得字符串，number是旋转的位数，sz是字符串长度,当judge是0时，表示右旋，1是左旋
bool Judge_Reverse_String(char* before_arr,char* now_arr,int number,int sz,int judge)
{
	if(judge == 1)
	{
		if(strcmp(before_arr,Reverse_String(now_arr,sz,number,0)) == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if(strcmp(before_arr,Reverse_String(now_arr,sz,number,1)) == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
