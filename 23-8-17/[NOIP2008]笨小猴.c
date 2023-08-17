#include <stdio.h>
#include <string.h>
int main (void)
{
	int maxn = 0,minn = 9,sum = 0;
	int i,j;
	char ch[10] = {0};
	scanf("%s",ch);
	for(i = 0;i < strlen(ch);i++)
	{
		sum = 0;
		for(j = 0;j < strlen(ch);j++)
		{
			if(ch[i] == ch[j])
			{
				sum++;
			}
		}
		if(sum > maxn)
		{
			maxn = sum;
		}
		if(sum < minn)
		{
			minn = sum;
		}
	}
	int judge = maxn - minn;
	int flag = 1;
	for(int i = 2;i < judge;i++)
	{
		if(judge % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if(flag == 1 && judge != 1 && judge != 0)
	{
		printf ("Lucky Word\n%d",judge);
	}
	else
	{
		printf ("No Answer\n%d",judge);
	}
	return 0;
}
