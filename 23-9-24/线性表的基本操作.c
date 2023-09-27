#define MAXSIZE 20
typedef int ElemType;
typedef struct{
	//数组存储数据元素，最大值为MAXSIZE
	ElemType data[MAXSIZE];
	//线性表当前长度
	int length;
}SqList;
//函数功能：获取元素操作
//操作结果：用e返回L中第i个数据元素的值
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
Status GetElem(SqList L,int i,ElemType* e)
{
	if(L.length == 0 || i < 1 || i > L.length)
	{
		return ERROR;
	}
	else
	{
		*e = L.data[i - 1];
		return OK;
	}
}
//插入算法
//初始条件：顺序线性表L已存在，1 《= i 《= ListLenfgth（L）
//操作结果：再L中第i个位置之前插入新的数据元素e，L的长度+1
Status ListInsert(SqList* L,int i,ElemType e)
{
	int k;
	//顺序线性表已经满了
	if(L->length == MAXSIZE)
	{
		return ERROR;
	}
	//当i不在范围内时
	if(i < 1 || i > L->length + 1)
	{
		return ERROR;
	}
	//若插入数据位置不在表尾
	if(i <= L->length)
	{
		//将要插入位置后数据元素向后移动一位
		for(k = L->length-1;k >= i-1;k--)
		{
			L->data[k+1] = L->data[k];
		}
	}
	//将新元素插入
	L->data[i-1] = e;
	L->length++;
	return OK;
}
//线性表元素删除操作
//初始条件：顺序线性表L已经存在，1小于等于i小于等于ListLength
Status ListDelete(SqList* L,int i,ElemType* e)
{
	int k;
	//线性表为空
	if(L->length == 0)
	{
		return ERROR;
	}
	//删除位置不正确
	if(i < 1 || i > L->length)
	{
		return ERROR;
	}
	*e = L->data[i - 1];
	if(i < L->length)
	{
		for(k = i;k < L->length;k++)
		{
			L->data[k-1] = L->data[k];
		}
	}
	L->length--;
	return OK;
}
