#include<stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stu{
	char name[20];
	int age;
}STU;

void test_int(int arr[],int sz);
int cmp_int(const void* e1,const void* e2);
void Print_intArr(int* arr,int sz);
void test_struct_int(STU arr[],int sz);
int cmp_struct_int(const void* e1,const void* e2);
void Print_struct_int(STU arr[],int sz);
void test_struct_str(STU arr[],int sz);
int cmp_struct_str(const void* e1,const void* e2);
void Print_struct_str(STU arr[],int sz);

int main (void)
{
	int arr[] = {9,8,7,6,5,4,3,2,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	test_int(arr,len);
	Print_intArr(arr,len);
	printf ("\n");
	
	STU student[3] = {{"zhangsan",10},{"lisi",5},{"wangmazi",30}};
	int len2 = sizeof(student)/sizeof(student[0]);
	test_struct_int(student,len2);
	Print_struct_int(student,len2);
	printf ("\n");
	test_struct_str(student,len2);
	Print_struct_str(student,len2);
	
	
	return 0;
}

//函数功能：测试qsort排序int类型
void test_int(int arr[],int sz)
{
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
}

//函数功能：int类型的cmp函数
int cmp_int(const void* e1,const void* e2)
{
	return  *(int*)e1 - *(int*)e2;
}

//函数功能：打印int类型的数组的值
void Print_intArr(int* arr,int sz)
{
	for(int i = 0;i < sz;i++)
	{
		printf ("%d ",*(arr + i));
	}
}

//函数功能：排序结构体中的int类型的数据
void test_struct_int(STU arr[],int sz)
{
	qsort(arr,sz,sizeof(arr[0]),cmp_struct_int);
}

//函数功能：结构体中的int类型的cmp函数
int cmp_struct_int(const void* e1,const void* e2)
{
	return ((STU*)e1)->age - ((STU*)e2)->age;
}

//函数功能：打印结构体中的int类型
void Print_struct_int(STU arr[],int sz)
{
	for(int i = 0;i < sz;i++)
	{
		printf ("%d ",arr[i].age);
	}
}

//函数功能：给结构体中的字符串排序
void test_struct_str(STU arr[],int sz)
{
	qsort(arr,sz,sizeof(STU),cmp_struct_str);
}

//函数功能：给结构体中的字符串排序的cmp函数
int cmp_struct_str(const void* e1,const void* e2)
{
	return strcmp(((STU*)e1)->name,((STU*)e2)->name);
}

//函数功能：打印结构体中的字符串
void Print_struct_str(STU arr[],int sz)
{
	for(int i = 0;i < sz;i++)
	{
		printf ("%s ",arr[i].name);
	}
}
