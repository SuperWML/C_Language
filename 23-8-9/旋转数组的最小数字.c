//暴力解题法==
int minNumberInRotateArray(int* nums, int numsLen ) {
	int min = nums[0];
	for(int i = 0;i < numsLen;i++)
	{
		if(nums[i] < min)
		{
			min = nums[i];
		}
	}
	return min;
}
