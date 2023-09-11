

void moveZeroes(int* nums, int numsSize){
	int left = 0;
	int right = 0;
	while(right < numsSize)
	{
		if(nums[right] != 0)
		{
			int tmp = nums[right];
			nums[right] = nums[left];
			nums[left] = tmp;
			left++;
		}
		right++;
	}
	return nums;
}

void moveZeroes(int* nums, int numsSize){
	int left = 0;
	int right = 0;
	while(right < numsSize)
	{
		if(nums[right] != 0)
		{
			int tmp = nums[right];
			nums[right] = nums[left];
			nums[left] = tmp;
			left++;
		}
		right++;
	}
	return nums;
}
