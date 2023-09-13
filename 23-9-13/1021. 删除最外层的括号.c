#include <stdio.h>
#include <malloc.h>
#include <string.h>
char * removeOuterParentheses(char * s){
	int len = strlen(s);
	char* res = (char*)calloc(sizeof(char),len+1);
	char* stack = (char*)calloc(sizeof(char),(len/2));
	int pos = 0,top = 0;
	for(int i = 0;i < len;i++)
	{
		char c = s[i];
		if(c == ')')
		{
			top--;
		}
		if(top > 0)
		{
			res[pos++] = c;
		}
		if(c == '(')
		{
			stack[top++] = c;
		}
	}
	free(stack);
	res[pos] = '\0';
	return res;
}

int main (void)
{
	char arr[11] = "(()())(())";
	strcpy(arr,removeOuterParentheses(arr));
	printf ("%s",arr);
	return 0;
}
