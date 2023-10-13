

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
	*returnSize = 2*numsSize;
	int* ret = (int*)calloc(*returnSize,sizeof(int));
	int p = 0;
	for(int i  = 0;i < 2;i++)
	{
		for(int j = 0;j < numsSize;j++)
		{
			ret[p++] = nums[j];
		}
	}
	return ret;
}
