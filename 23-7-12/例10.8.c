#include <stdio.h>
#define N 80
int main (void)
{
	char str[N];
	int i,letter = 0,digit = 0,space = 0,others = 0;
	printf ("Input a string:");
	gets(str);
	for(i = 0;str[i] != '\0';i++)
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			letter++;
		}else if (str[i] >= '0' && str[i] <= '9')
		{
			digit++;
		}else if(str[i] == ' ')
		{
			space++;
		}else 
		{
			others++;
		}
	}
	printf ("English ch:%d\n",letter);
	printf ("Number:%d\n",digit);
	printf ("space:%d\n",space);
	printf ("others:%d",others);
	
	return 0;
}
