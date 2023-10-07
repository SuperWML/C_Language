#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
typedef struct People{
	char name[20];
	char sex[6];
	char addr[20];
	char tele[11];
	int age;
	
}People;

//定义一个结构体，用来存储每个人的信息
typedef struct Contact{
	People* data;
	int sz;
	int capacity;
}Contact;

//函数功能：创建通讯录
Contact* Creat()
{
	Contact* newContact = (Contact*)malloc(sizeof(Contact));
	memset(newContact,0,sizeof(Contact));
	return newContact;
}


int main (void)
{
	Contact* book = Creat();
	return 0;
}
