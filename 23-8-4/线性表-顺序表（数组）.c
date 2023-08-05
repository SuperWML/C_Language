#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
 typedef struct Arr{
	int* pArr;                //存放数组首元素的地址
	int len;                  //存放数组最大能存储的元素个数
	int cun;                  //当前的元素个数
}Arr;
 
void Init_Arr(Arr* arr,int num);
void Add_Arr_Val(Arr* arr,int val);
bool Is_Full(Arr* arr);
bool Is_Empty(Arr* arr);
void Show_Arr(Arr* arr);
void Delete_Arr_Ele(Arr* arr,int pos,int* val);
void Insert_Arr(Arr* arr,int pos,int val);
void Reverse_Arr(Arr* arr);
void Sort_Arr(Arr* arr);

int main (void)
{
	Arr my_arr;
	int delete_val;
	Init_Arr(&my_arr,6);
	Add_Arr_Val(&my_arr,1);
	Add_Arr_Val(&my_arr,2);
	Add_Arr_Val(&my_arr,3);
	Add_Arr_Val(&my_arr,4);
	Add_Arr_Val(&my_arr,5);
	Add_Arr_Val(&my_arr,6);
	//Add_Arr_Val(&my_arr,7);
	Show_Arr(&my_arr);
	Delete_Arr_Ele(&my_arr,6,&delete_val);
	printf ("删除的元素的数值是%d\n",delete_val);
	Show_Arr(&my_arr);
	Insert_Arr(&my_arr,3,15);
	Show_Arr(&my_arr);
	Reverse_Arr(&my_arr);
	Show_Arr(&my_arr);
	Sort_Arr(&my_arr);
	Show_Arr(&my_arr);
	return 0;
}
//函数功能：初始化自己的数组
void Init_Arr(Arr* arr,int num)
{
	arr->pArr = (int*)malloc(sizeof(int) * num );
	if(NULL == arr->pArr)
	{
		exit(-1);
	}
	else
	{
		arr->len = num;
		arr->cun = 0;
	}
}
//函数功能：在数组里面放入自己想要的值
void Add_Arr_Val(Arr* arr,int val)
{
	if(Is_Full(arr))
	{
		printf ("数组满了\n");
	}
	else
	{
		arr->pArr[arr->cun] = val;
		arr->cun++;
	}
}
//函数功能：判断数组是否满了
bool Is_Full(Arr* arr)
{
	if(arr->len == arr->cun)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//函数功能：判断数组是否为空
bool Is_Empty(Arr* arr)
{
	if(0 == arr->cun)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//函数功能：输出数组中的元素
void Show_Arr(Arr* arr)
{
	if(Is_Empty(arr))
	{
		printf ("数组为空，无法输出");
	}
	else
	{
		for(int i = 0;i < arr->cun;i++)
		{
			printf ("%d ",arr->pArr[i]);
		}
		printf ("\n");
	}
}
//函数功能：删除数组中指定位置的元素的值
void Delete_Arr_Ele(Arr* arr,int pos,int* val)
{
	if(pos < 1 || pos >= arr->cun+1)
	{
		printf ("删除位置不合法\n");
		exit(-1);
	}
	else
	{
		*val = arr->pArr[pos-1];
		for(int i = pos-1;i <= arr->cun;i++)
		{
			arr->pArr[i] = arr->pArr[i+1];
		}
		arr->cun--;
	}
}
//函数功能：在数组中插入一个元素
void Insert_Arr(Arr* arr,int pos,int val)
{
	if(Is_Full(arr))
	{
		printf ("数组已满，不能插入\n");
		exit(-1);
	}
	else if(pos < 1 || pos > arr->cun+1)
	{
		printf ("输入位置不合法，不能插入\n");
		exit(-1);
	}
	else
	{
		for(int i = arr->cun;i >= pos-1;i--)
		{
			arr->pArr[i+1] = arr->pArr[i];
		}
		arr->pArr[pos-1] = val;
		arr->cun++;
	}
}
//函数功能：倒置数组
void Reverse_Arr(Arr* arr)
{
	int i = 0;
	int j = arr->cun-1;
	while(i < j)
	{
		int tmp = arr->pArr[i];
		arr->pArr[i] = arr->pArr[j];
		arr->pArr[j] = tmp;
		i++;
		j--;
	}
}
//函数功能：给数组排序
void Sort_Arr(Arr* arr)
{
	for(int i = 0;i < arr->cun;i++)
	{
		for(int j = i+1;j < arr->cun;j++)
		{
			if(arr->pArr[i]>arr->pArr[j])
			{
				int tmp = arr->pArr[i];
				arr->pArr[i] = arr->pArr[j];
				arr->pArr[j] = tmp;
			}
		}
	}
}
