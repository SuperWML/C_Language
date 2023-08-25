

int findMaxConsecutiveOnes(int* nums, int numsSize){
	int count = 0;
	int Maxcount = 0;
	for(int i = 0;i < numsSize;i++)
	{
		if(nums[i] == 1)
		{
			count++;
		}
		else
		{
			if(Maxcount < count)
			{
				Maxcount = count;
			}
			count = 0;
		}
	}
	if(Maxcount < count)
	{
		Maxcount = count;
	}
	return Maxcount;
}
