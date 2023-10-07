

void sortColors(int* nums, int numsSize){
	for(int i = 0;i < numsSize-1;i++)
	{
		int min = i;
		for(int j = i+1;j < numsSize;j++)
		{
			if(nums[min] > nums[j])
			{
				min = j;
			}
		}
		if(min != i)
		{
			int tmp = nums[i];
			nums[i] = nums[min];
			nums[min] = tmp;
		}
	}
}
