#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include <string.h>

typedef struct My_lianbiao{
	int data;
	struct My_lianbiao* next;
}Lianbiao;

Lianbiao* Init_Lianbiao();
void Insert_Lianbiao(Lianbiao* lianbiao,int where,int data);
bool Have_This_value(Lianbiao*lianbiao,int where);
void Print_Lianbiao(Lianbiao*lianbiao);
void delete_Lianbiao(Lianbiao*lianbiao,int where);


int main (void)
{
	Lianbiao* pHead = Init_Lianbiao();
	char arr[10] = {0};
	int n = 0;
	int where = 0;
	int data = 0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",arr);
		if(strcmp(arr,"insert") == 0)
		{
			scanf("%d %d",&where,&data);
			Insert_Lianbiao(pHead,where,data);
		}
		else
		{
			scanf("%d",&where);
			delete_Lianbiao(pHead,where);
		}
	}
	Print_Lianbiao(pHead);
	
	return 0;
}

//函数功能：初始化一个链表
Lianbiao* Init_Lianbiao()
{
	Lianbiao* start = (Lianbiao*)malloc(sizeof(Lianbiao));
	start->data = 0;
	start->next = NULL;
	return start;
}

//函数功能：在链表中插入值
void Insert_Lianbiao(Lianbiao* lianbiao,int where,int data)
{
	Lianbiao* p = lianbiao;
	Lianbiao* x = lianbiao;
	if(p ->next == NULL)
	{
		Lianbiao* newL = (Lianbiao*)malloc(sizeof(Lianbiao));
		newL->data = data;
		newL->next = NULL;
		p->next = newL;
	}
	else if(Have_This_value(lianbiao,where))
	{
		int i = 0;
		Lianbiao* newL = (Lianbiao*)malloc(sizeof(Lianbiao));
		for(i = 0;p->data != where;i++)
		{
			p = p->next;
		}
		for(int j = 0;j < i-1;j++)
		{
			x = x->next;
		}
		newL->data = data;
		newL->next = p;
		x->next = newL;
		p->next = p->next;
	}
	else
	{
		Lianbiao* newL = (Lianbiao*)malloc(sizeof(Lianbiao));
		while(p->next)
		{
			p = p->next;
		}
		p->next = newL;
		newL->data = data;
		newL->next = NULL;
	}
}

//函数功能：查找链表中是否存在对应的值
bool Have_This_value(Lianbiao*lianbiao,int where)
{
	Lianbiao* p = lianbiao->next;
	while(p)
	{
		if(p->data == where)
		{
			return true;
		}
		else
		{
			p = p->next;
		}
	}
	return false;
}
//函数功能：输出链表中的内容
void Print_Lianbiao(Lianbiao*lianbiao)
{
	Lianbiao* p = lianbiao->next;
	while(p)
	{
		printf("%d ",p->data);
		p = p->next;
	}
}

//函数功能：删除链表中的元素
void delete_Lianbiao(Lianbiao*lianbiao,int where)
{
	int i = 1;
	int j = 0;
	Lianbiao*p = lianbiao->next;
	Lianbiao*pre = lianbiao;
	while(p->data != where)
	{
		p = p->next;
		i++;
	}
	while(j < i-1)
	{
		pre = pre->next;
		j++;
	}
	pre->next = p->next;
	free(p);
}
