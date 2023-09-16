#include <stdio.h>
#include <stdbool.h>
#define MAXSIZE 5
typedef struct stack{
	int arr[MAXSIZE];
	int top;
}Stack;

void Init_stack(Stack* S)
{
	S->top = -1;
}

bool Is_Empty(Stack* S)
{
	if(S->top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Is_Full(Stack* S)
{
	if(S->top+1 == MAXSIZE)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Push(Stack* S,int val)
{
	if(Is_Full(S))
	{
		printf ("栈已满，无法入栈\n");
		return;
	}
	else
	{
		S->top++;
		S->arr[S->top] = val;
		printf ("%d已经入栈成功\n",val);
	}
}

void Pop(Stack* S)
{
	if(Is_Empty(S))
	{
		printf ("栈空，无法出栈\n");
		return;
	}
	else
	{
		printf ("%d已经出栈\n",S->arr[S->top]);
		S->top--;
		return;
	}
}

void Print(Stack* S)
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
			printf ("%d ",S->arr[i]);
		}
		printf ("\n");
	}
}

void Peek(Stack* S)
{
	if(Is_Empty(S))
	{
		return;
	}
	printf ("栈顶元素是%d",S->arr[S->top]);
}

int Size(Stack* S)
{
	return S->top + 1;
}

int main (void)
{
	return 0;
}
