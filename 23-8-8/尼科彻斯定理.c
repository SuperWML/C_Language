#include <stdio.h>
#include <math.h>
int main (void) {
	int m = 0;
	scanf("%d", &m);
	int tri_num = pow(m, 3);
	int start = 1, end, sum;
	int find = 0;
	while (start <= tri_num) {
		sum = 0;
		for (end = start; end <= start + (m - 1) * 2; end += 2) {
			sum += end;
			if (sum == tri_num) {
				//printf ("%d %d", start, end);
				find = 1;
				break;
			}
		}
		if(find == 1)
		{
			break;
		}
		start += 2;
	}
	for(;start <= end;start += 2)
	{
		printf ("%d",start);
		if(start <= end-2)
		{
			printf ("+");
		}
	}
	return 0;
}
