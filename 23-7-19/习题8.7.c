#include <stdio.h>
#define N 10
void ReadScoreAndCountScore(int score[],int count[]);
void PrintCountAndStar(int count[]);
float CountMean(int score[]);
float FindMedian(int score[]);
void SortData(int score[]);
int FindMode(int count[]);
void PrintModeandScore(int CountMax,int score[]);

int main (void)
{
	int score[N] = {0};
	int count[N] = {0};
	ReadScoreAndCountScore(score,count);
	printf ("Grade\tCount\tHistogram\n");
	PrintCountAndStar(count);
	printf ("分数的平均数是：%.2f\n",CountMean(score));
	printf ("中位数是%.2f\n",FindMedian(score));
	PrintModeandScore(FindMode(count),score);
	
}
//函数功能：读取成绩并且计算成绩出现的次数
void ReadScoreAndCountScore(int score[],int count[])
{
	int i = 0;
	for(i = 0;i < N;i++)
	{
		printf ("请输入1~10分：");
		scanf("%d",&score[i]);
		count[score[i] - 1]++;
	}
}
//函数功能：输出成绩出现的次数并且打印星星
void PrintCountAndStar(int count[])
{
	int grade = 1;
	int j = 0;
	for(grade = 1;grade <= N;grade++)
	{
		printf ("%d\t%d\t",grade,count[grade-1]);
		for(j = 0;j < count[grade-1];j++)
		{
			printf ("%c",'*');
		}
		printf ("\n");
	}
}
//函数功能：计算分数的平均数
float CountMean(int score[])
{
	int i = 0;
	float sum = 0;
	for(i = 0;i < N;i++)
	{
		sum += score[i];
	}
	return (sum/N);
}
//函数功能：寻找中位数
float FindMedian(int score[])
{
	SortData(score);
	if(N % 2 == 0)
	{
		int mid = N/2;
		return ((score[mid-1] + score[mid-2])/2);
	}
	else
	{
		int mid = N/2;
		return score[mid];
	}
}
//函数功能：给数据排序
void SortData(int score[])
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for(i = 0;i < N-1;i++)
	{
		for(j = i+1;j < N;j++)
		{
			if(score[i] > score[j])
			{
				tmp = score[i];
				score[i] = score[j];
				score[j] = tmp;
			}
		}
	}
}
//函数功能：寻找众数
int FindMode(int count[])
{
	int i = 0;
	int max = count[0];
	for(i = 0;i < N;i++)
	{
		if(max < count[i])
		{
			max = count[i];
		}
	}
	return max;
}
//函数功能：输出众数并且对应的成绩
void PrintModeandScore(int CountMax,int count[])
{
	int i = 0;
	for(i = 0;i < N;i++)
	{
		if(count[i] == CountMax)
		{
			printf ("众数是：%d,对应的成绩是：%d\n",CountMax,count[i]);
			break;
		}
	}
}
