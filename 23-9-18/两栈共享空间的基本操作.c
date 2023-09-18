#include <stdio.h>
#include <stdbool.h>
#define MAXSIZE 100
typedef struct TwoStack{
	int arr[MAXSIZE];
	int top1;
	int top2;
}TwoStack;

//函数功能：初始化双栈
void Init_TwoStack(TwoStack* S)
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
//函数功能：判断栈1是否已满
bool Is_Full_One(TwoStack* S)
{
	return S->top1 + 1 == S->top2;
}
//函数功能：判断栈2是否已满
bool Is_Full_Two(TwoStack* S)
{
	return S->top2-1 == S->top1;
}
//函数功能：入栈1
void Push_One(TwoStack* S,int val)
{
	if(Is_Full_One(S))
	{
		printf ("栈1已满，无法入栈\n");
		return;
	}
	else
	{
		S->top1++;
		S->arr[S->top1] = val;
	}
}
//函数功能：入栈2
void Push_Two(TwoStack* s,int val)
{
	if(Is_Full_Two(s))
	{
		printf ("栈2已满，无法入栈\n");
		return;
	}
	else
	{
		s->top2--;
		s->arr[s->top2] = val;
	}
}
//函数功能：栈1出栈
int Pop(TwoStack* S)
{
	if(Is_Empty_One(S))
	{
		printf ("栈1为空，无法出栈\n");
	}
	else
	{
		return S->arr[S->top1--];
	}
}
//函数功能：栈2出栈
int Pop_Two(TwoStack* S)
{
	if(Is_Empty_Two(S))
	{
		printf ("栈2为空，无法出栈\n");
	}
	else
	{
		return S->arr[S->top2++];
	}
}
//函数功能：清空栈1和栈2
void Empty_Stack(TwoStack* S,int num)
{
	if(num == 1)
	{
		S->top1 = -1;
	}
	else if(num == 2)
	{
		S->top2 = MAXSIZE;
	}
}
//函数功能：遍历栈1和栈2
void Print_Stack(TwoStack* S,int num)
{
	if(num == 1)
	{
		if(Is_Empty_One(S))
		{
			printf ("栈1为空，无法遍历\n");
		}
		else
		{
			for(int i = 0;i <= S->top1;i++)
			{
				printf ("%d ",S->arr[i]);
			}
		}
	}
	else
	{
		if(Is_Empty_Two(S))
		{
			printf ("栈2为空，无法遍历\n");
		}
		else
		{
			for(int i = MAXSIZE - 1;i >= S->top2;i--)
			{
				printf ("%d ",S->arr[i]);
			}
		}
	}
}
//函数功能：销毁双栈
void Destory_Stack(TwoStack* S)
{
	S->top1 = -1;
	S->top2 = MAXSIZE;
}

int main (void)
{
	return 0;
}
