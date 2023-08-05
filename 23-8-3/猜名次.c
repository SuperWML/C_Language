#include <stdio.h>
int main (void)
{
	int a,b,c,d,e;
	for(a = 1;a <= 5;a++)
	{
		for(b = 1;b <= 5;b++)
		{
			for(c = 1;c <= 5;c++)
			{
				for(d = 1;d <= 5;d++)
				{
					for(e = 1;e <= 5;e++)
					{
						if(a*b*c*d*e == 120)
						{
							if( (a == 3) + (b == 2) == 1 &&
								(b == 2) + (e == 4) == 1 &&
								(c == 1) + (d == 2) == 1 &&
								(c == 5) + (d == 3) == 1 &&
								(e == 4) + (a == 1) == 1)
							{
								printf ("a的名次是%d\nb的名次是%d\nc的名次是%d\nd的名次是%d\ne的名次是%d\n",a,b,c,d,e);
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}
