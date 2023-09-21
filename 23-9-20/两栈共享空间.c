#define MAXSIZE 100
#include <stdbool.h>
#include <stdio.h>
typedef struct TwoStack{
	int base[MAXSIZE];
	int top1;
	int top2;
}TwoStack;

//函数功能：初始化双栈
void Init_Two(TwoStack* S)
{
	S->top1 = -1;
	S->top2 = MAXSIZE;
}
//函数功能：判断栈1是否为空
bool Is_Empty_One(TwoStack* S)
{
	return S->top1 == -1;
}
//函数功能：判断栈2是否为空
bool Is_Empty_Two(TwoStack* S)
{
	return S->top2 == MAXSIZE;
}
//函数功能：判断栈1是否为满
bool Is_Full_One(TwoStack* S)
{
	return 	S->top1+1 == S->top2;
}
//函数功能：判断栈2是否为满
bool Is_Full_Two(TwoStack* S)
{
	return S->top2-1 == S->top1;
}
//函数功能：入栈1
void Push_One(TwoStack* S,int val)
{
	if(Is_Full_One(S))
	{
		printf ("栈1为满，无法入栈\n");
		return;
	}
	else
	{
		S->top1++;
		S->base[S->top1] = val;
	}
}
//函数功能：入栈2
void Push_Two(TwoStack* S,int val)
{
	if(Is_Full_Two(S))
	{
		printf ("栈2已满，无法入栈\n");
		return;
	}
	else
	{
		S->top2--;
		S->base[S->top2] = val;
	}
}
//函数功能：出栈1
int Pop1(TwoStack* S)
{
	if(Is_Empty_One(S))
	{
		printf ("栈1为空，无法出栈\n");
	}
	else
	{
		return S->base[S->top1--];
	}
}
//函数功能：出栈2
int Pop2(TwoStack* S)
{
	if(Is_Empty_Two(S))
	{
		printf ("栈2为空，无法出栈\n");
	}
	else
	{
		return S->base[S->top2++];
	}
}
//函数功能：清空栈1
void Clear_Stack_One(TwoStack* S)
{
	S->top1 = -1;
}
//函数功能：清空栈2
void Clear_Stack_Two(TwoStack* S)
{
	S->top2 = MAXSIZE;
}
//函数功能：遍历栈1
void Print_Stack_One(TwoStack* S)
{
	if(Is_Empty_One(S))
	{
		printf ("栈1为空，无法遍历\n");
		return;
	}
	else
	{
		for(int i = 0;i <= S->top1;i++)
		{
			printf ("%d ",S->base[i]);
		}
		printf ("\n");
	}
}
//函数功能：遍历栈2
void Print_Stack_Two(TwoStack* S)
{
	if(Is_Empty_Two(S))
	{
		printf ("栈2为空，无法遍历\n");
	}
	else
	{
		for(int i = MAXSIZE-1;i >= S->top2;i--)
		{
			printf ("%d ",S->base[i]);
		}
		printf ("\n");
	}
}

