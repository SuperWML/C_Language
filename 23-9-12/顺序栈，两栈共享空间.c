#include <stdbool.h>
#define MAXSIZE 5
typedef int StackType;
//栈的定义
typedef struct Stack{
	StackType stack[MAXSIZE];
	int top;
}stack;
//两栈共享空间的定义
typedef struct Two_Stack
{
	StackType stack2[MAXSIZE];
	int top1;
	int top2;
}two_stack;
bool Push(stack* S,int e)
{
	if(S->top == MAXSIZE - 1)
	{
		return false;
	}
	else
	{
		S->top++;
		S->stack[S->top] = e;
		return true;
	}
}
bool Pop(stack* S,int* e)
{
	if(S->top == -1)
	{
		return false;
	}
	else
	{
		*e = S->stack[S->top];
		S->top--;
	}
}
bool Two_Push(two_stack* S,int stack_num,int e)
{
	if(S->top1 + 1 == S->top2)
	{
		return false;
	}
	else if(stack_num == 1)
	{
		S->top1++;
		S->stack2[S->top1] = e;
		return true;
	}
	else
	{
		S->top2--;
		S->stack2[S->top2] = e;
		return true;
	}
}
bool Two_Pop(two_stack* S,int stack_num,int* e)
{
	if(S->top1 == -1 || S->top2 == MAXSIZE)
	{
		return false;
	}
	else if(stack_num == 1)
	{
		*e = S->stack2[S->top1];
		S->top1--;
	}
	else
	{
		*e = S->stack2[S->top2];
		S->top2++;
	}
	return true;
}
