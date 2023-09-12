#include <stdbool.h>
#define MAXSIZE 5
typedef int StackType;
//栈的定义
typedef struct Stack{
	StackType stack[MAXSIZE];
	int top;
}stack;
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
