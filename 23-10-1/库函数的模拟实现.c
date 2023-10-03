#include <assert.h>
char* my_strcat(char* dest,const char*src)
{
	char* ret = dest;
	assert(dest && src);
	while(*dest != '\0')
	{
		dest++;
	}
	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}

int My_strcmp(const char* arr1,const char* arr2)
{
	assert(arr1 && arr2);
	while(*arr1 == *arr2)
	{
		arr1++;
		arr1++;
	}
	if(*arr1 > *arr2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	return 0;
}
