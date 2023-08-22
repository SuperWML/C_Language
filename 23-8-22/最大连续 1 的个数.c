

int findMaxConsecutiveOnes(int* nums, int numsSize){
	int count = 0;
	int MaxCount = 0;
	for(int i = 0;i < numsSize;i++)
	{
		if(nums[i] == 1)
		{
			count++;
		}
		else
		{
			if(MaxCount < count)
			{
				MaxCount = count;
			}
			count = 0;
		}
	}
	if(MaxCount < count)
	{
		MaxCount = count;
	}
	return MaxCount;
}
