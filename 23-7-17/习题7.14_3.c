#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Question(int num1,int num2,int answer);
int main (void)
{
	srand((unsigned int)time(NULL));
	int Answer = 0;
	int point = 0;         //记录学生分数
	int count = 0;         //记录做题次数
	do
	{
		count++;
		int num1 = rand()%10+1;
		int num2 = rand()%10+1;
		printf ("%d*%d = ?\n",num1,num2);
		scanf("%d",&Answer);
		if(Question(num1,num2,Answer))
		{
			printf ("Right!\n");
			point++;
		}
		else
		{
			printf ("Wrong!\n");
		}
	}while(count != 10);
	printf ("正确率是%.0f%%",point/10.0*100);
	
	return 0;
}
//函数功能：出问题
int Question(int num1,int num2,int answer)
{
	if(answer == num1*num2)
	{
		return 1;
	}
	return 0;
}
