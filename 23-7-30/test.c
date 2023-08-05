#include <stdio.h>
int Is_Odd(int number);
void Print_Arr(int arr[],int sz);
void Sort_Arr(int arr[],int leve,int sz);
int Swap_Odd_Even(int arr[],int sz);
void Input_Arr(int arr[],int sz);

int main (void)
{
	int number = 0;
	printf ("请输入您想要的元素数量：");
	scanf("%d",&number);
	int arr[number];
	Input_Arr(arr,number);
	int locate = Swap_Odd_Even(arr,number);
	Sort_Arr(arr,locate,number);
	printf ("经过处理后的数组元素是：\n");
	Print_Arr(arr,number);
	
	return 0;
}
//函数功能：打印数组
void Print_Arr(int arr[],int sz)
{
	for(int i = 0;i < sz;i++)
	{
		printf ("%d ",arr[i]);
	}
	printf ("\n");
}

//函数功能：判断是否是奇数
int Is_Odd(int number)
{
	if(number % 2 == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//函数功能：分别给奇数元素和偶数元素排序
void Sort_Arr(int arr[],int leve,int sz)
{
	//给奇数元素排序
	for(int i = 0;i < leve-1;i++)
	{
		for(int j = i+1;j < leve;j++)
		{
			if(arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	//给偶数元素排序
	for(;leve<sz-1;leve++)
	{
		for(int j = leve+1;j < sz;j++)
		{
			if(arr[leve] > arr[j])
			{
				int tmp = arr[leve];
				arr[leve] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

//函数功能：交换奇数和偶数的顺序，让奇数排在前面，返回值是一个整数，表示当前偶数元素的位置
int Swap_Odd_Even(int arr[],int sz)
{
	int i = 0;
	int locate = 0;
	for(i = 0;i < sz;i++)
	{
		if(Is_Odd(arr[i]))
		{
			int tmp = arr[locate];
			arr[locate] = arr[i];
			arr[i] = tmp;
			locate++;
		}
	}
	return locate;
}

//函数功能：给数组元素赋值
void Input_Arr(int arr[],int sz)
{
	printf ("当前可输入的元素数量是%d,请输入元素的值，中间用空格隔开:\n",sz);
	for(int i = 0;i < sz;i++)
	{
		scanf("%d",&arr[i]);
	}
}
