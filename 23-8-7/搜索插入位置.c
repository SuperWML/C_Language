int searchInsert(int* nums, int numsSize, int target){
	// int i = 0;
	// int j = 0;
	// for(i = 0;i < numsSize;i++)
	// {
	//     if(nums[i] == target)
	//     {
	//         return i;
	//     }
	//     else
	//     {
	//         for(j = numsSize-1;j >= 0;j--)
	//         {
	//             if(nums[j] > target)
	//             {
	//                 continue;
	//             }
	//             else
	//             {
	//                 break;
	//             }
	//         }
	//     }
	// }
	// return j+1;
	int left = 0;
	int right = numsSize-1;
	int mid = 0;
	while(left <= right)
	{
		mid = left + (right-left)/2;
		if(nums[mid] < target)
		{
			left = mid+1;
		}
		else if(nums[mid] > target)
		{
			right = mid-1;
		}
		else if (nums[mid] == target)
		{
			return mid;
		}
	}
	if(nums[mid] > target)
	{
		return mid;
	}
	else if(nums[mid] < target)
	{
		return mid+1;
	}
	else
	{
		return -1;
	}
}
