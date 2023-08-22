void moveZeroes(int* nums, int numsSize){
	int left = 0,right = 0;
	while(right < numsSize)
	{
		if(nums[right] != 0)
		{
			int tmp = nums[left];
			nums[left] = nums[right];
			nums[right] = tmp;
			left++;
		}
		right++;
	}
}
