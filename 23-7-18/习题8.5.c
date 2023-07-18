#include <stdio.h>
#define MAXSTU 40
#define NUMBER_SIZE 8

int ReadScore(int arr[]);
void ReadNumber(char arr[][NUMBER_SIZE],int number);
int FindMax(int score[],int size);


int main (void)
{
	int student[MAXSTU] = {0};
	char id[MAXSTU][NUMBER_SIZE] = {0};
	int number = ReadScore(student);
	ReadNumber(id,number);
	int xiabiao = FindMax(student,number);
	printf ("最好的成绩是：%d,学号是：%s",student[xiabiao],id[xiabiao]);
	
	return 0;
}

//函数功能：读取学生成绩，遇到负数就退出
int ReadScore(int arr[])
{
	int i = -1;
	do
	{
		i++;
		printf ("Input Score:");
		scanf("%d",&arr[i]);
	}while(arr[i] >= 0);
	return i;
}
//函数功能：读取学号
void ReadNumber(char arr[][NUMBER_SIZE],int number)
{
	int i = 0;
	for(i = 0;i < number;i++)
	{
		scanf("%s",&arr[i]);
	}
}
//函数功能：找到成绩中的最大值并返回下标
int FindMax(int score[],int size)
{
	int i = 0;
	int max = score[0];
	for(i = 0;i < size;i++)
	{
		if(max < score[i])
		{
			max = score[i];
		}
	}
	for(i = 0;i < size;i++)
	{
		if(max == score[i])
		{
			return i;
		}
	}
}
