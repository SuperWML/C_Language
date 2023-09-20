int removeElement(int* nums, int numsSize, int val){
	int left = 0;
	int right = 0;
	while(right < numsSize)
	{
		if(nums[right] != val)
		{
			int tmp = nums[right];
			nums[right] = nums[left];
			nums[left] = tmp;
			left++;
		}
		right++;
	}
	return left;
}
