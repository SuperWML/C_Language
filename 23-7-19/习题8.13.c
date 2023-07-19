#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUMBER 6000
int main (void)
{
	srand((unsigned int)time(NULL));
	int i = 0;
	int arr[6] = {0};
	for(i = 0;i < NUMBER;i++)
	{
		int ret = rand()%6+1;
		switch (ret) {
		case 1:
			arr[ret-1]++;
			break;
		case 2:
			arr[ret-1]++;
			break;
		case 3:
			arr[ret-1]++;
			break;
		case 4:
			arr[ret-1]++;
			break;
		case 5:
			arr[ret-1]++;
			break;
		case 6:
			arr[ret-1]++;
			break;
		}
	}
	for(i = 0;i < 6;i++)
	{
		printf ("%d被筛到的概率是%.0f%%\n",i+1,(float)arr[i]/NUMBER*100);
	}
	return 0;
}
