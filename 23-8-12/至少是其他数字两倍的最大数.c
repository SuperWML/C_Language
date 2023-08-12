int dominantIndex(int* nums, int numsSize){
	int max = nums[0];
	int find = 0;
	for(int i = 0;i < numsSize;i++)
	{
		if(max < nums[i])
		{
			max = nums[i];
		}
	}
	for(int j = 0;j < numsSize;j++)
	{
		if(max >= 2*nums[j])
		{
			find++;
		}
	}
	if(find == numsSize-1)
	{
		for(int i = 0;i < numsSize;i++)
		{
			if(nums[i] == max)
			{
				return i;
			}
		}
	}
	return -1;
}
