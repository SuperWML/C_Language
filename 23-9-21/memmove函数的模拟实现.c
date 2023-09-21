#include <stdio.h>
#include <assert.h>
void* my_memmove(void* dest,const void* src,int count)
{
	assert((dest && src));
	void* ret = dest;
	if(src > dest)
	{
		//顺顺序
		while(count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while(count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return ret;
}
