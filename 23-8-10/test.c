/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
static arr[2];
int* findErrorNums(int* nums, int numsSize, int* returnSize){
	*returnSize = 2;
	int tmp = 0;
	for(int i = 0;i < numsSize-1;i++)
	{
		for(int j = i+1;j < numsSize;j++)
		{
			if((nums[i] == nums[j]) && nums[0] > 1)
			{
				tmp = nums[i];
				arr[0] = tmp;
				arr[1] = tmp - 1;
			}
			else if((nums[i] == nums[j]) && nums[0] == 1)
			{
				tmp = nums[i];
				arr[0] = tmp;
				arr[1] = tmp + 1;
			}
		}
	}
	return arr;
}
int main (void)
{
	int nums[3] = {1,3,3};
	int ret;
	findErrorNums(nums,3,&ret);
}
