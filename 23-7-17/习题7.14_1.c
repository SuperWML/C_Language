#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Question(int num1,int num2,int answer);
int main (void)
{
	srand((unsigned int)time(NULL));
	int Right = 0;
	int Answer = 0;
	do
	{
		int num1 = rand()%10+1;
		int num2 = rand()%10+1;
		printf ("%d*%d = ?\n",num1,num2);
		scanf("%d",&Answer);
		if(Question(num1,num2,Answer))
		{
			printf ("Right!\n");
			Right = 1;
		}
		else
		{
			printf ("Wrong!\n");
		}
	}while(!Right);

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
