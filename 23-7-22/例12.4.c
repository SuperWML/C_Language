#include <stdio.h>
struct date
{
	int year;
	int month;
	int day;
};
void Func(struct  date p)	
{
	p.year = 2000;
	p.month = 5;
	p.day = 22;
}
int main (void)
{
	struct date d;
	d.year = 1999;
	d.month = 4;
	d.day = 23;
	printf ("Before function call:%d/%02d/%02d\n",d.year,d.month,d.day);
	Func(d);
	printf ("After function call:%d/%02d/%02d\n",d.year,d.month,d.day);
	return 0;
}
