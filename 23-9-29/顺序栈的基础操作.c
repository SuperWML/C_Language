#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#define MAXSIZE 100
struct Stack{
	int base[MAXSIZE];
	int top;
};
//函数功能：初始化栈
void InitStack(struct Stack* stack)
{
	stack->top = -1;
}
//函数功能：判断栈是否为空
int Is_Empty(struct Stack* stack)
{
	return stack->top == -1;
}
//函数功能：判断站是否为满
int Is_Full(struct Stack* stack)
{
	return stack->top + 1 == MAXSIZE;
}
//函数功能：入栈操作
void Push(struct Stack* stack,int data)
{
	if(Is_Full(stack))
	{
		printf ("栈满，无法入栈\n");
		return;
	}
	else
	{
		stack->base[++stack->top] = data;
	}
}
//函数功能：出栈操作
int Pop(struct Stack* stack)
{
	if(Is_Empty(stack))
	{
		printf ("栈空，无法出栈\n");
		return 0;
	}
	else
	{
		return stack->base[stack->top--];
	}
}
//函数功能：查看栈顶元素
int Peek(struct Stack* stack)
{
	if(Is_Empty(stack))
	{
		printf ("栈空，无法查看\n");
		return -1;
	}
	else
	{
		return stack->base[stack->top];
	}
}
//函数功能：遍历栈并打印元素
void Print(struct Stack* stack)
{
	if(Is_Empty(stack))
	{
		printf ("栈空，无法遍历\n");
		return;
	}
	else
	{
		for(int i = 0;i <= stack->top;i++)
		{
			printf ("%d ",stack->base[i]);
		}
	}
	return;
}
//函数功能：获取栈的长度
int Size(struct Stack* stack)
{
	return stack->top+1;
}
//函数功能：销毁栈
void Destory_Stack(struct Stack* stack)
{
	stack->top = -1;
}
