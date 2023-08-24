void Swap(int* num1,int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

int removeElement(int* nums, int numsSize, int val){
	int left = 0,right = 0;
	while(right < numsSize)
	{
		if(nums[right] != val)
		{
			Swap(nums + right,nums + left);
			left++;
		}
		right++;
	}
	return left;
}
