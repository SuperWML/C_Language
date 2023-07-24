#include <stdio.h>
float compute_GPA(char grades[],int n);
int Char_To_Num(char Alphabet);
int main (void)
{
	char grades[] = {'A','A','A','B','F','D'};
	int sz = sizeof(grades)/sizeof(grades[0]);
	printf ("%.1f",compute_GPA(grades,sz));
	return 0;
}
//函数功能：计算GPA绩点
float compute_GPA(char grades[],int n)
{
	float sum = 0;
	for(int i = 0;i < n;i++)
	{
		sum += Char_To_Num(grades[i]);
	}
	return sum/n;
}
//函数功能：接收一个字符，并将其转换成对应的成绩数字
int Char_To_Num(char Alphabet)
{
	switch(Alphabet)
	{
	case 'A':
		{
			return 4;
			break;
		}
	case 'B':
		{
			return 3;
			break;
		}
	case 'C':
		{
			return 2;
			break;
		}
	case 'D':
		{
			return 1;
			break;
		}
	case 'F':
		{
			return 0;
			break;
		}
	}
}
