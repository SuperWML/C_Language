#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#define MAXSIZE 0
//定义一个int类型的栈
typedef struct steak{
	int* base;
	int top;
}Steak;

//初始化一个栈
void Init_Steak(Steak* s)
{
	s->base = (int*)malloc(sizeof(int) * MAXSIZE);
	s->top = -1;
}

//函数功能：判断栈是否为空
bool Is_Empty(Steak* s)
{
	if(s->top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//函数功能：判断栈是否是为满
bool Is_Full(Steak* s)
{
	if(s->top + 1 == MAXSIZE)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//函数功能：入栈操作
bool Push(Steak* S,int val)
{
	if(Is_Full(S))
	{
		printf ("栈满了，无法入栈\n");
		return false;
	}
	else
	{
		S->top++;
		S->base[S->top] = val;
		return true;
	}
}
//函数功能：出栈操作
bool Pop(Steak* S)
{
	if(Is_Empty(S))
	{
		printf ("栈空，无法出栈\n");
		return false;
	}
	else
	{
		S->top--;
	}
}
//函数功能：查看栈顶元素
int Peek(Steak* S)
{
	if(Is_Empty(S))
	{
		printf ("栈空，无法出栈\n");
		return false;
	}
	return S->base[S->top];
}
//函数功能：遍历栈中的元素
void Print(Steak* S)
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
		printf ("\n");
	}
}
//函数功能：获取栈的长度
int size(Steak* S)
{
	return S->top + 1;
}
//函数功能：栈的销毁
bool destory(Steak* S)
{
	free(S->base);
	free(S);
}

int main (void)
{
	Steak* S = (Steak*)malloc(sizeof(Steak));
	Init_Steak(S);
//	printf ("%d",S->top);
	if(Is_Full(S))
	{
		printf ("1\n");
	}
	else
	{
		printf ("0\n");
	}
	
	return 0;
}
