#define MAXSIZE 1000
#include <stdbool.h>
typedef struct{
	int data;
	//游标，为0时表示无指向
	int cur;
}Component,StaticLinkList[MAXSIZE];
//将一维数组space中各分量连城一备用链表
//space[0].cur为头指针，“0”表示空指针
bool InitList(StaticLinkList space)
{
	int i;
	for(i = 0;i < MAXSIZE-1;i++)
	{
		space[i].cur = i+1;
	}
	//目前静态链表为空，最后一个元素的cur为0
	space[MAXSIZE - 1].cur = 0;
	return true;
}
//若备用链表非空，啧返回分配的结点下标，否则返回0
int Malloc_SLL(StaticLinkList space)
{
	//当前数组第一个元素的cur存的值
	//就是要返回的第一个备用空闲的下标
	int i = space[0].cur;
	//由于要拿出一个分量来使用了，所以我们就得把它的下一个分量用来做备用
	if(space[0].cur)
	{
		space[0].cur = space[i].cur;
	}
	return i;
}
//静态链表插入元素
bool ListInsert(StaticLinkList L,int i,int e)
{
	int j,k,l;
	k = MAXSIZE-1;
	if(i < 1 || i > ListLength(L) + 1)
	{
		return false;
	}
	//获得空闲分量的下标
	j = Malloc_SLL(L);
	if(j)
	{
		//将数据赋值给此份量的data
		L[j].data = e;
		//找到第i个元素之前的位置
		for(l = 1;l <= i-1;l++)
		{
			k = L[k].cur;
		}
		//把第i个元素之前的cur赋值给新元素的cur
		L[j].cur = L[k].cur;
		//把新娘元素的下标废止给第i个元素之前元素的cur
		L[k].cur = j;
		return true;
	}
	return false;
}
