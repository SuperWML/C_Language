int pivotIndex(int* nums, int numsSize){
	int i = 0;
	int total = 0;
	int leftSums = 0;
	for(int i = 0;i < numsSize;i++)
	{
		total += nums[i];
	}
	for(int i = 0;i < numsSize;i++)
	{
		if(2*leftSums + nums[i] == total)
		{
			return i;
		}
		leftSums += nums[i];
	}
	return -1;
}
