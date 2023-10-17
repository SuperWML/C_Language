#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#define MAX 4
#define DataType int      //把int类型定义为DataType，表示顺序表中的数据，其实什么数据类型都可以重新定义

typedef struct SL{
	DataType* data;             //定义一个指针变量data，用来存储对应的数据
	int sz;                     //定义一个sz变量，用来控制当前的数据个数
	int capacity;               //定义一个capacity变量，用来表示当前顺序表中的容量
}SeqList;

//函数功能：顺序表的中间删除
void SLerase(SeqList* s,int pos)
{
	assert(pos >= 0 && pos < s->sz && s->sz > 0);
	for(int i = pos;i < s->sz-1;i++)
	{
		s->data[i] = s->data[i+1];
	}
	s->sz--;
}

//函数功能：顺序表的头删
void SLpopFront(SeqList* s)
{
	SLerase(s,0);
}

//函数功能：初始化顺序表
void InitSq(SeqList* s)
{
	s->data = (DataType*)malloc(sizeof(DataType)*MAX);
	s->sz = 0;
	s->capacity = MAX;
}

//函数功能:销毁顺序表
void DestorySl(SeqList* s)
{
	free(s->data);                   //解除s->data指向空间的所有权
	s->sz = 0;                       //将当前顺序表的元素个数置为0
	s->capacity = 0;                 //将顺序表的总个数置为0
	s->data = NULL;                  //将s->data指针指向NULL，避免野指针的错误
}

//函数功能：检查顺序表中的容量是否够用
void CheckSL(SeqList* s)
{
	if(s->sz == s->capacity)
	{
		DataType*tmp = realloc(s->data,2*sizeof(DataType)*s->capacity);    //如果顺序表满了，重新申请内存，大小是当前顺序表最大容量的二倍
		if(tmp == NULL)
		{
			perror("realloc error");
		}
		else
		{
			s->data = tmp;
			s->capacity *= 2;
		}
	}
}


//函数功能：顺序表的尾删
void SLpopBack(SeqList* s)
{
	assert((s->sz) > 0);                    //暴力检查顺序表中是否有元素
	//s->sz--;                              //顺序表的尾删，直接让顺序表中的元素个数-1就好
	SLerase(s,s->sz-1);
}

//函数功能：在顺序表中找一个中间位置插入（包括了暴力检查）
void SLpush(SeqList* s,int pos,DataType x)
{
	assert(pos >= 0 && pos <= s->sz);
	CheckSL(s);
	for(int i = s->sz;i > pos;i--)
	{
		s->data[i] = s->data[i-1];
	}
	s->data[pos] = x;
	s->sz++;
}

//函数功能:头插法
void SlpushFront(SeqList* s,DataType x)
{
	CheckSL(s);
	SLpush(s,0,x);
}
//函数功能：顺序表的尾插法
void SLpushTail(SeqList* s,DataType x)
{
	CheckSL(s);
	SLpush(s,s->sz,x);
}

//函数功能：顺序表的遍历
void PrintSL(SeqList* s)
{
	for(int i = 0;i < s->sz;i++)
	{
		printf ("%d ",s->data[i]);
	}
	printf ("\n");
}

//函数功能：查找顺序表中的元素，并且返回其对应的下标 ???
int SLFind(SeqList* s,DataType x)
{
	for(int i = 0;i < s->sz;i++)
	{
		if(s->data[i] == x)
		{
			return i;
		}
	}
	return false;
}

//函数功能：根据位置修改顺序表中的元素的值
void SLmodify(SeqList* s,int pos,DataType x)
{
	assert(pos >= 0 && pos < s->sz);
	s->data[pos] = x;
}

int main (void)
{
	SeqList s;                  //定义一个顺序表变量S
	InitSq(&s);                 //初始化顺序表s，这里要传递变量s的地址，如果只是传值的话改变不了s中的值
	SLpushTail(&s,1);
	SLpushTail(&s,2);
	SLpushTail(&s,3);
	SLpushTail(&s,4);
	SLpushTail(&s,5);
	SLpushTail(&s,6);
	SlpushFront(&s,10);
	SLpush(&s,3,7);
	//SLpopBack(&s);
	SLerase(&s,2);
	SLpopFront(&s);
	SLmodify(&s,2,10);
	PrintSL(&s);
	DestorySl(&s);
	return 0;
}
