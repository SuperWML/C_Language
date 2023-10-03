

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){
	int p = 0;
	int* rt = (int*)malloc(sizeof(int)*2*numsSize);
	*returnSize = 2*numsSize;
	for(int i = 0;i < 2;i++)
	{
		for(int j = 0;j < numsSize;j++)
		{
			rt[p] = nums[j];
			p++;
		}
	}
	return rt;
}
