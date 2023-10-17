#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#define MAX 4
#define DataType int      //��int���Ͷ���ΪDataType����ʾ˳����е����ݣ���ʵʲô�������Ͷ��������¶���

typedef struct SL{
	DataType* data;             //����һ��ָ�����data�������洢��Ӧ������
	int sz;                     //����һ��sz�������������Ƶ�ǰ�����ݸ���
	int capacity;               //����һ��capacity������������ʾ��ǰ˳����е�����
}SeqList;

//�������ܣ�˳�����м�ɾ��
void SLerase(SeqList* s,int pos)
{
	assert(pos >= 0 && pos < s->sz && s->sz > 0);
	for(int i = pos;i < s->sz-1;i++)
	{
		s->data[i] = s->data[i+1];
	}
	s->sz--;
}

//�������ܣ�˳����ͷɾ
void SLpopFront(SeqList* s)
{
	SLerase(s,0);
}

//�������ܣ���ʼ��˳���
void InitSq(SeqList* s)
{
	s->data = (DataType*)malloc(sizeof(DataType)*MAX);
	s->sz = 0;
	s->capacity = MAX;
}

//��������:����˳���
void DestorySl(SeqList* s)
{
	free(s->data);                   //���s->dataָ��ռ������Ȩ
	s->sz = 0;                       //����ǰ˳����Ԫ�ظ�����Ϊ0
	s->capacity = 0;                 //��˳�����ܸ�����Ϊ0
	s->data = NULL;                  //��s->dataָ��ָ��NULL������Ұָ��Ĵ���
}

//�������ܣ����˳����е������Ƿ���
void CheckSL(SeqList* s)
{
	if(s->sz == s->capacity)
	{
		DataType*tmp = realloc(s->data,2*sizeof(DataType)*s->capacity);    //���˳������ˣ����������ڴ棬��С�ǵ�ǰ˳�����������Ķ���
		if(tmp == NULL)
		{
			perror("realloc error");
		}
		else
		{
			s->data = tmp;
			s->capacity *= 2;
		}
	}
}


//�������ܣ�˳����βɾ
void SLpopBack(SeqList* s)
{
	assert((s->sz) > 0);                    //�������˳������Ƿ���Ԫ��
	//s->sz--;                              //˳����βɾ��ֱ����˳����е�Ԫ�ظ���-1�ͺ�
	SLerase(s,s->sz-1);
}

//�������ܣ���˳�������һ���м�λ�ò��루�����˱�����飩
void SLpush(SeqList* s,int pos,DataType x)
{
	assert(pos >= 0 && pos <= s->sz);
	CheckSL(s);
	for(int i = s->sz;i > pos;i--)
	{
		s->data[i] = s->data[i-1];
	}
	s->data[pos] = x;
	s->sz++;
}

//��������:ͷ�巨
void SlpushFront(SeqList* s,DataType x)
{
	CheckSL(s);
	SLpush(s,0,x);
}
//�������ܣ�˳����β�巨
void SLpushTail(SeqList* s,DataType x)
{
	CheckSL(s);
	SLpush(s,s->sz,x);
}

//�������ܣ�˳���ı���
void PrintSL(SeqList* s)
{
	for(int i = 0;i < s->sz;i++)
	{
		printf ("%d ",s->data[i]);
	}
	printf ("\n");
}

//�������ܣ�����˳����е�Ԫ�أ����ҷ������Ӧ���±� ???
int SLFind(SeqList* s,DataType x)
{
	for(int i = 0;i < s->sz;i++)
	{
		if(s->data[i] == x)
		{
			return i;
		}
	}
	return false;
}

//�������ܣ�����λ���޸�˳����е�Ԫ�ص�ֵ
void SLmodify(SeqList* s,int pos,DataType x)
{
	assert(pos >= 0 && pos < s->sz);
	s->data[pos] = x;
}

int main (void)
{
	SeqList s;                  //����һ��˳������S
	InitSq(&s);                 //��ʼ��˳���s������Ҫ���ݱ���s�ĵ�ַ�����ֻ�Ǵ�ֵ�Ļ��ı䲻��s�е�ֵ
	SLpushTail(&s,1);
	SLpushTail(&s,2);
	SLpushTail(&s,3);
	SLpushTail(&s,4);
	SLpushTail(&s,5);
	SLpushTail(&s,6);
	SlpushFront(&s,10);
	SLpush(&s,3,7);
	//SLpopBack(&s);
	SLerase(&s,2);
	SLpopFront(&s);
	SLmodify(&s,2,10);
	PrintSL(&s);
	DestorySl(&s);
	return 0;
}
