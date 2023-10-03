#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 1000
struct TwoStack{
	int data[MAX_SIZE];
	int top1;
	int top2;
};
//函数功能：初始化双栈
void Init(struct TwoStack* stack)
{
	stack->top1 = 0;
	stack->top2 = MAX_SIZE-1;
}
//函数功能：判断栈1是否为空
bool Is_Empty_one(struct TwoStack* stack)
{
	return stack->top1 == 0;
}
//函数功能：判断栈2是否为空
bool Is_empty_Two(struct TwoStack* stack)
{
	return stack->top2 == MAX_SIZE-1;
}
//函数功能：判断栈1是否为满
bool IsFullOne(struct TwoStack* stack)
{
	return stack->top1 == stack->top2;
}
//函数功能：判断栈2是否为满
bool IsFullTwo(struct TwoStack* stack)
{
	return stack->top2 == stack->top1;
}
//函数功能：入栈1
void Push1(struct TwoStack*stack,int data)
{
	if(IsFullOne(stack))
	{
		printf("栈1已满，无法入栈\n");
		return;
	}
	else
	{
		stack->data[stack->top1++] = data;
	}
}
//函数功能：入栈2
void Push2(struct TwoStack*stack,int data)
{
	if(IsFullTwo(stack))
	{
		printf ("栈2已满，无法入栈\n");
		return;
	}
	else
	{
		stack->data[stack->top2--] = data;
	}
}
//函数功能：出栈1
int Pop1(struct TwoStack* stack)
{
	if(Is_Empty_one(stack))
	{
		printf ("栈1为空，无法出栈\n");
	}
	else
	{
		return stack->data[--stack->top1];
	}
}
//函数功能：出栈2
int Pop2(struct TwoStack* stack)
{
	if(Is_empty_Two(stack))
	{
		printf ("栈二为空，无法出栈\n");
	}
	else
	{
		return stack->data[++stack->top2];
	}
}
//函数功能：清空栈1
void Clear1(struct TwoStack* stack)
{
	stack->top1 = 0;
}
//函数功能：清空栈2
void Clear2(struct TwoStack* stack)
{
	stack->top2 = MAX_SIZE-1;
}
//函数功能：遍历栈1
void Print1(struct TwoStack* stack)
{
	for(int i = 0;i < stack->top1;i++)
	{
		printf ("%d ",stack->data[i]);
	}
}
//函数功能：遍历栈2
void Print2(struct TwoStack* stack)
{
	for(int i = MAX_SIZE-1;i > stack->top2;i--)
	{
		printf ("%d ",stack->data[i]);
	}
}
