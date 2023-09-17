#include <stdio.h>
#include <stdbool.h>
#define MAXD_SIZE 100

typedef struct{
	int data[MAXD_SIZE];
	int top1;
	int top2;
}TwoStacks;

//初始化双栈
void initTwoStacks(TwoStacks* S)
{
	S->top1 = -1;
	S->top2 = MAXD_SIZE;
}

//判断栈1是否为空
bool Is_Empty_One(TwoStacks* S)
{
	return S->top1 == -1;
}

//判断栈2是否为空
bool Is_Empty_Two(TwoStacks* S)
{
	return S->top2 == MAXD_SIZE;
}

//判断栈1是否为满
bool Is_Full_One(TwoStacks* S)
{
	return S->top1 + 1 == S->top2;
}

//判断栈2是否为空
bool Is_Full_Two(TwoStacks* S)
{
	return S->top2-1 == S->top1;
}

//入栈1
void push1(TwoStacks* S,int val)
{
	if(Is_Full_One(S))
	{
		printf ("栈1已满，无法入栈\n");
		return;
	}
	else
	{
		S->data[++S->top1] = val;
	}
}

//入栈2
void Push2(TwoStacks* S,int val)
{
	if(Is_Full_Two(S))
	{
		printf ("栈2已满，无法入栈\n");
		return;
	}
	else
	{
		S->data[--S->top2] = val;
	}
}

//出栈1
void Pop1(TwoStacks* S,int* val)
{
	if(Is_Empty_One(S))
	{
		printf ("栈1是空栈，无法出栈\n");
	}
	else
	{
		*val = S->data[S->top1];
		S->top1--;
	}
}

//出栈2
void Pop2(TwoStacks* S,int* val)
{
	if(Is_Empty_Two(S))
	{
		printf ("栈2为空，无法出栈\n");
	}
	else
	{
		*val = S->data[S->top2];
		S->top2++;
	}
}

//遍历栈1
void Print1(TwoStacks* S)
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
			printf ("%d ",S->data[i]);
		}
		printf ("\n");
	}
}

//遍历栈2
void Print2(TwoStacks* S)
{
	if(Is_Empty_Two(S))
	{
		printf ("栈2为空，无法遍历\n");
		return;
	}
	else
	{
		for(int i = MAXD_SIZE-1;i >= S->top2;i--)
		{
			printf ("%d ",S->data[i]);
		}
		printf ("\n");
	}
}

//销毁双栈
void Destory(TwoStacks* S)
{
	S->top1 = -1;
	S->top2 = MAXD_SIZE;
}

int main (void)
{
	
	return 0;
}
