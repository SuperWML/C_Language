#include <stdio.h>
int main (void)
{
	int ten,five,one,count = 0;
	for(ten = 1;ten <= 50;ten++)
	{
		for(five = 1;five <= 50;five++)
		{
			for(one = 1;one <= 50;one++)
			{
				if(((10*ten + 5*five + one) == 100) && (ten + five + one) == 50)
				{
					count++;
					printf ("第%d种方案，10元%d张，5元%d张，1元%d张\n",count,ten,five,one);
				}
			}
		}
	}
	return 0;
}
