/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void sort(int* nums,int numsSize)
{
	for(int i = 0;i < numsSize-1;i++)
	{
		for(int j = i+1;j < numsSize;j++)
		{
			int tmp = 0;
			if(nums[i] > nums[j])
			{
				tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
			}
		}
	}
}
static int arr[2];
int* findErrorNums(int* nums, int numsSize, int* returnSize){
	*returnSize = 2;
	int tmp = 0;
	sort(nums,numsSize);
	int prev = 0;
	for(int i = 0;i < numsSize;i++)
	{
		int curr = nums[i];
		if(curr == prev)
		{
			arr[0] = prev;
		}
		else if(curr - prev > 1)
		{
			arr[1] = prev+1;
		}
		prev = curr;
	}
	if(nums[numsSize - 1] != numsSize)
	{
		arr[1] = numsSize;
	}
	return arr;
}
