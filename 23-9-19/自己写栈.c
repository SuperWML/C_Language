#define MAXSIZE 100
#include <stdbool.h>
#include <stdio.h>
typedef struct stack{
	int base[MAXSIZE];
	int top;
}stack;

//函数功能：初始化栈
void Init_Stack(stack* S)
{
	S->top = -1;
}
//函数功能：判断栈是否为空
bool Is_Empty(stack* S)
{
	return S->top == -1;
}
//函数功能：判断栈是否满了
bool Is_Full(stack* S)
{
	return S->top == MAXSIZE-1;
}
//函数功能：入栈操作
void Push(stack* S,int val)
{
	if(Is_Full(S))
	{
		printf ("栈满了，无法入栈\n");
		return;
	}
	else
	{
		S->top++;
		S->base[S->top] = val;
	}
}
//函数功能：出栈操作
int Pop(stack* S)
{
	if(Is_Empty(S))
	{
		printf ("栈空，无法出栈\n");
		return 0;
	}
	else
	{
		return S->base[S->top--];
	}
}
//函数功能：查看栈顶元素
void Peek(stack* S)
{
	if(Is_Empty(S))
	{
		printf ("栈空，无法查看栈顶元素\n");
		return;
	}
	else
	printf ("栈顶的元素是：%d\n",S->base[S->top]);
}
//函数功能：遍历栈并打印元素
void Print(stack* S)
{
	if(Is_Empty(S))
	{
		printf ("栈空，无法遍历\n");
		return;
	}
	else
	{
		for(int i = 0;i <= S->top;i++)
		{
			printf ("%d ",S->base[i]);
		}
	}
}
//函数功能：获取栈的长度
int Size(stack* S)
{
	return S->top + 1;
}
//函数功能：销毁栈
void Destory_Stack(stack* S)
{
	S->top = -1;
}

