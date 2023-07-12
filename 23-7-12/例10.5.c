#include <stdio.h>
#define N 80
void myStrcpy(char dest[],char source[]);
int main (void)
{
	char a[N],b[N];
	gets(a);
	myStrcpy(b,a);
	puts(b);
	return 0;
}
//函数功能：自己所写的strcpy函数
void myStrcpy(char dest[],char source[])
{
	int i = 0;
	while(source[i] != '\0')
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
}
