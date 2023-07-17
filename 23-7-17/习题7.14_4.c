#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Question(int num1,int num2,int answer,int control);
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
		int Ret = rand()%4;         //产生0-3四个数，分别对应加减乘除
		switch(Ret)
		{
		case 0:
			{
				printf ("%d + %d = ?\n",num1,num2);
				scanf("%d",&Answer);
				if(Question(num1,num2,Answer,Ret) == 1)
				{
					printf ("Right!\n");
					point++;
				}
				else
				{
					printf ("Wrong!\n");
				}
				break;
			}
		case 1:
			{
				printf ("%d - %d = ?\n",num1,num2);
				scanf("%d",&Answer);
				if(Question(num1,num2,Answer,Ret) == 1)
				{
					printf ("Right!\n");
					point++;
				}
				else
				{
					printf ("Wrong!\n");
				}
				break;
			}
		case 2:
			{
				printf ("%d * %d = ?\n",num1,num2);
				scanf("%d",&Answer);
				if(Question(num1,num2,Answer,Ret) == 1)
				{
					printf ("Right!\n");
					point++;
				}
				else
				{
					printf ("Wrong!\n");
				}
				break;
			}
		case 3:
			{
				printf ("%d / %d = ?\n",num1,num2);
				scanf("%d",&Answer);
				if(Question(num1,num2,Answer,Ret) == 1)
				{
					printf ("Right!\n");
					point++;
				}
				else
				{
					printf ("Wrong!\n");
				}
				break;
			}
		}
	}while(count != 10);
	printf ("正确率是%.0f%%",point/10.0*100);
	
	return 0;
}
//函数功能：出问题
int Question(int num1,int num2,int answer,int control)
{
	switch(control)
	{
	case 0:
		{
			if(num1 + num2 == answer)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		}
	case 1:
		{
			if(num1 - num2 == answer)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		}
	case 2:
		{
			if(num1 * num2 == answer)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		}
	case 3:
		{
			if(num1 / num2 == answer)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		}
	}
}
