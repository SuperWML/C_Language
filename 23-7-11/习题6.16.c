#include <stdio.h>
int main (void)
{
	int gongji,muji,xiaoji;
	for(gongji = 1;gongji <= 100;gongji++)
	{
		for(muji = 1;muji <= 100;muji++)
		{
			for(xiaoji = 1;xiaoji <= 100;xiaoji++)
			{
				if(xiaoji % 3 == 0)
				{
					if((5*gongji + 3*muji + xiaoji/3) == 100)
					{
						printf ("公鸡：%d，母鸡：%d，小鸡：%d\n",gongji,muji,xiaoji);
					}
				}
			}
		}
	}
	return 0;
}
