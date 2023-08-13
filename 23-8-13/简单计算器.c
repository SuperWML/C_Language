#include <stdio.h>
int main (void)
{
	double num1,num2;
	char ch;
	scanf("%lf%c%lf",&num1,&ch,&num2);
	switch(ch)
	{
	case '+':
		{
			printf ("%.4f%c%.4f=%.4f\n",num1,ch,num2,num1+num2);
			break;
		}
	case '-':
		{
			printf ("%.4f%c%.4f=%.4f\n",num1,ch,num2,num1-num2);
			break;
		}
	case '*':
		{
			printf ("%.4f%c%.4f=%.4f\n",num1,ch,num2,num1*num2);
			break;
		}
	case '/':
		{
			if(num2 != 0)
			{
				printf ("%.4f%c%.4f=%.4f\n",num1,ch,num2,num1/num2);
			}
			else
			{
				printf ("Wrong!Division by zero!\n");
			}
			break;
		}
	default :
		{
			printf ("Invalid operation!\n");
			break;
		}
	}
	return 0;
}
