

int findMaxConsecutiveOnes(int* nums, int numsSize){
	int count = 0;
	int maxcount = 0;
	for(int i = 0;i < numsSize;i++)
	{
		if(nums[i] == 1)
		{
			count++;
		}
		else
		{
			if(maxcount < count)
			{
				maxcount = count;
			}
			count = 0;
		}
	}
	if(maxcount < count)
	{
		maxcount = count;
	}
	return maxcount;
}
