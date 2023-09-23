#define MAXSIZE 100
#include <stdbool.h>
#include <stdio.h>
typedef struct TwoStack{
	int arr[MAXSIZE];
	int top1;
	int top2;
}TwoStack;
//函数功能：初始化双栈
void InitTwoStack(TwoStack* S)
{
	S->top1 = -1;
	S->top2 = MAXSIZE;
}
//函数功能：判断栈是否为空
bool Is_empty(TwoStack* S,int num)
{
	if(num == 1)
	{
		if(S->top1 == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if(num == 2)
	{
		if(S->top2 == MAXSIZE)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
//函数功能：判断栈是否为满
bool Is_Full(TwoStack* S,int num)
{
	if(num == 1)
	{
		return S->top1 + 1 == S->top2;
	}
	else
	{
		return S->top2-1 == S->top1;
	}
}
//函数功能：入栈
void Push(TwoStack* S,int num,int val)
{
	if(num == 1)
	{
		if(Is_Full(S,num))
		{
			printf ("栈满，无法入栈\n");
		}
		else
		{
			S->arr[++S->top1] = val;
		}
	}
	else
	{
		if(Is_Full(S,num))
		{
			printf ("栈满，无法入栈\n");
		}
		else
		{
			S->arr[--S->top2] = val;
		}
	}
}
//函数功能：出栈
int Pop(TwoStack* S,int num)
{
	if(Is_empty(S,num))
	{
		printf ("栈空，无法出栈\n");
		return 0;
	}
	else
	{
		if(num == 1)
		{
			return S->top1--;
		}
		else
		{
			return S->top2++;
		}
	}
}
//函数功能：清空栈1或栈2
void Clear(struct TwoStack* S,int num)
{
	if(num == 1)
	{
		S->top1 = -1;
	}
	else
	{
		S->top2 = MAXSIZE;
	}
}
//函数功能：遍历栈1或栈2
void Print(struct TwoStack* S,int num)
{
	if(num == 1)
	{
		for(int i = 0;i <= S->top1;i++)
		{
			printf ("%d ",S->arr[i]);
		}
	}
	else
	{
		for(int i = MAXSIZE-1;i >= S->top2;i--)
		{
			printf ("%d ",S->arr[i]);
		}
	}
}
