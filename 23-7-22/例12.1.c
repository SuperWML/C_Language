#include <stdio.h>
typedef struct data
{
	int year;
	int month;
	int day;
}DATA;
typedef struct student
{
	long studentID;
	char studentName[10];
	char studentSex;
	DATA brithdat;
	int score[4];
}STUDENT;
int main (void)
{
	STUDENT stu1 = {100310121,"王刚",'M',{1991,5,19},{72,83,90,82}};
	STUDENT stu2;
	stu2=stu1;
	printf ("stu2:%10ld%8s%3c%6d/%02d/%02d%4d%4d%4d%4d\n",stu2.studentID,stu2.studentName,stu2.studentSex,stu2.brithdat.year,stu2.brithdat.month,stu2.brithdat.day,stu2.score[0],stu2.score[1],stu2.score[2],stu2.score[3]);
	
	return 0;
}
