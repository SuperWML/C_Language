

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
	int p = 0;
	*returnSize = numsSize*2;
	int* ret = (int*)calloc(numsSize*2,sizeof(int));
	for(int i = 0;i < 2;i++)
	{
		for(int j = 0;j < numsSize;j++)
		{
			ret[p++] = nums[j];
		}
	}
	return ret;
}
