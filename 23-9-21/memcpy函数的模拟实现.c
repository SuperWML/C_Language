#include <stdio.h>
void* my_memcpy(void* dest,const void* soruce,size_t num);
int main (void)
{
	char arr1[] = "hello";
	char arr2[] = "world";
	//未使用my_memcpy函数之前，arr1的值
	printf ("%s\n",arr1);
	my_memcpy(arr1,arr2,5);
	//使用my_memcpy函数之后，arr1的值
	printf ("%s\n",arr1);
	return 0;
}
//函数功能：自己模拟实现的memcpy（）函数
void* my_memcpy(void* dest,const void* soruce,size_t num)
{
	void* tmp = dest;
	while(num--)
	{
		*(char*)dest = *(char*)soruce;
		dest = (char*)dest + 1;
		soruce = (char*)soruce + 1;
	}
	return tmp;
}
