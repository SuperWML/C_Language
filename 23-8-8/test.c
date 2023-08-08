#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
	int sum = 0;
	int tmp = x;
	if(x < 0)
	{
		return false;
	}
	else if(x >= 0 && x < 10)
	{
		return true;
	}
	else
	{
		sum = 0;
		while(tmp)
		{
			sum += tmp%10;
			sum = sum*10;
			tmp /= 10;
		}
	}
	if(sum == x)
	{
		return true;
	}
	return false;
}
int main (void)
{
	printf("%d",isPalindrome(121));
}
