#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#define MAXSIZE 1
typedef struct Stack{
	int store[MAXSIZE];
	int top;
}int_stack;
//初始化栈
void Init_stack(int_stack* S)
{
	S->top = -1;
}

//判断栈是否为空
bool Is_empty(int_stack* S)
{
	return S->top == -1;
}

//判断栈是否满了
bool Is_Full(int_stack* S)
{
	return S->top == MAXSIZE - 1;
}

//入栈
void Push(int_stack* S,int val)
{
	if(Is_Full(S))
	{
		printf ("栈满了，无法入栈\n");
		return ;
	}
	else
	{
		S->top++;
		S->store[S->top] = val;
	}
}
//出栈
void Pop(int_stack* S,int* e)
{
	if(Is_empty(S))
	{
		printf ("栈空，无法出栈\n");
		return;
	}
	else
	{
		*e = S->store[S->top];
		S->top--;
	}
}
//函数功能：查看栈顶元素
int Peek(int_stack* S)
{
	if(Is_empty(S))
	{
		printf ("栈空，无法查看栈顶元素\n");
		return 0;
	}
	else
	{
		return S->store[S->top];
	}
}
//函数功能：获取栈的长度
int size(int_stack* S)
{
	return S->top + 1;
}
//函数功能：遍历栈中的元素
void printStack(int_stack* S)
{
	if(Is_empty(S))
	{
		printf ("栈空，无法遍历\n");
		return;
	}
	else
	{
		for(int i = 0;i <= S->top;i++)
		{
			printf ("%d ",S->store[i]);
		}
		printf ("\n");
	}
}
//函数功能：销毁栈
void Destory_Stack(int_stack* S)
{
	S->top = -1;
}

int main (void)
{
	int_stack s;
	int_stack s2;
	int val = 0;
	Init_stack(&s);
	Init_stack(&s2);
	Push(&s,1);
	Push(&s,2);
	Push(&s,3);
	printStack(&s);
	Pop(&s,&val);
	printf ("已经出栈，出栈的值是%d\n",val);
	printStack(&s);
	printf ("目前的栈顶元素是：%d\n",Peek(&s));
	printf ("目前栈的长度是%d",size(&s));
	return 0;
}
