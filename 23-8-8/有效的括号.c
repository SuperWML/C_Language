#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isValid(char * s){
	int right = 1;
	while(*s != '\0')
	{
		if((s[0] == '(' && s[1] == ')') || (s[0] == '{' && s[1] == '}') || (s[0] == '[' && s[1] == ']') )
		{
			s += 2;
		}
		else if()
		{
			right = 0;
			break;
		}
	}
	if(right == 1)
	{
		return true;
	}
	return false;
}
int main (void)
{
	char s[] = "()";
	printf ("%d",isValid(s));
	return 0;
}
