/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param nums int整型一维数组 
 * @param numsLen int nums数组长度
 * @param k int整型 
 * @return int整型
 */
int GetNumberOfK(int* nums, int numsLen, int k ) {
	// write code here
	int find = 0;
	for(int i = 0;i < numsLen;i++)
	{
		if(nums[i] == k)
		{
			find++;
		}
	}
	return find;
}
