#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void GetMemory(char** p)
{
	*p = (char*)calloc(100,sizeof(char));
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str);
	strcpy(str,"hello world");
	printf (str);
}
int main (void)
{
	Test();
}

