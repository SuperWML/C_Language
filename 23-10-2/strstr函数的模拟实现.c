#include <stdio.h>
#include <assert.h>
char* My_strstr(const char* str1,const char* str2)
{
	if(*str2 == '\0')
	{
		return str1;
	}
	char* cp = str1;
	char* s1 = str1;
	char* s2 = str2;
	while(*cp != '\0')
	{
		s1 = cp;
		while(*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
			if(*s2 == '\0')
			{
				return cp;
			}
		}
		cp++;
		s2 = str2;
	}
	return NULL;
}
int main (void)
{
	char arr1[] = "abbcdebcdebcde";
	char arr2[] = "bc";
	printf ("%s",My_strstr(arr1,arr2));
	return 0;
}
