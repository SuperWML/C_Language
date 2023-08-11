#include <stdio.h>
int findMaxConsecutiveOnes(int* nums, int numsSize){
	int count = 0;
	int i = 0;
	int tmp = 0;
	for(i = 0;i < numsSize - 1;i++)
	{
		int j = i+1;
		if(nums[i] == nums[j])
		{
			count++;
			tmp += count;
		}
		else
		{
			count = 0;
			tmp += count;
		}
	}
	return tmp;
}

int main (void)
{
	int arr[6] = {1,1,0,1,1,1};
	printf ("%d",findMaxConsecutiveOnes(arr,6));
}
