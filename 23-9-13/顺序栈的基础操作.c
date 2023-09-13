#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#define MAXSIZE 5
typedef struct Stack
{
	int* store;
	int top;
}stack;

void Init_stack(stack* S)
{
	S->store = (int*)malloc(sizeof(int) * MAXSIZE);
	S->top = -1;
}

bool Is_Empty(stack* S)
{
	return S->top == -1;
}

bool Is_Full(stack* S)
{
	return S->top+1 == MAXSIZE;
}

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
		S->store[S->top] = val;
		printf ("%d入栈成功\n",val);
	}
	return;
}

void Pop(stack* S)
{
	if(Is_Empty(S))
	{
		printf ("栈是空的，无法出栈\n");
	}
	else
	{
		int tmp = 0;
		tmp = S->store[S->top];
		S->top--;
		printf ("元素%d已经出栈成功\n",tmp);
	}
	return;
}

void peek(stack* S)
{
	printf ("栈顶元素是%d\n",S->store[S->top]);
}

int size(stack* S)
{
	return S->top + 1;
}

void destory_Stack(stack* S)
{
	S->top = -1;
	free(S->store);
}

void Print_Stack(stack* S)
{
	if(Is_Empty(S))
	{
		printf ("栈是空的，无法遍历\n");
	}
	else
	{
		for(int i = 0;i <= S->top;i++)
		{
			printf ("%d ",S->store[i]);
		}
		printf ("\n");
	}
	return;
}

int main ()
{
	stack* s = (stack*)malloc(sizeof(stack));
	Init_stack(s);
	//printf ("%d",s->top);
//	if(Is_Full(s))
//	{
//		printf ("栈是空的\n");
//	}
//	else
//	{
//		printf ("不是\n");
//	}
	Push(s,1);
	Push(s,2);
	Push(s,3);
//	Print_Stack(s);
//	Pop(s);
	Pop(s);
	peek(s);
	printf ("栈的长度是%d",size(s));
	
	
	return 0;
}
