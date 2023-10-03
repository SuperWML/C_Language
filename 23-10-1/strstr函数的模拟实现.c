#include <stdlib.h>
#include <assert.h>
const char* my_strstr(const char* str1,const char* str2)
{
	const char* cp;        //记录开始匹配的位置
	const char* s1;        //遍历str1指向的字符串
	const char* s2;
	assert(str1 && str2);
	if(*str2 == '\0')
	{
		return str1;
	}
	cp = str1;
	while(*cp)
	{
		s1 = cp;
		s2 = str2;
		while(*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}
