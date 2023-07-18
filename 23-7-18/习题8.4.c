#include <stdio.h>
#define MAX_NUMBER 40
int ReadScore(int arr[]);
float Average(int arr[],int number);

int main (void)
{
	int score[MAX_NUMBER] = {0};
	int StuNum = ReadScore(score);
	float avg = Average(score,StuNum);
	int count = 0,i;
	
	for(i = 0;i < StuNum;i++)
	{
		if(score[i] >= avg)
		{
			count++;
		}
	}
	printf ("高于平均分的人数是：%d",count);
	
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
//函数功能：计算成绩的平均值，返回成绩的平均值
float Average(int arr[],int number)
{
	int i = 0;
	float sum = 0;
	for(i = 0;i < number;i++)
	{
		sum += arr[i];
	}
	return (sum/number);
}
