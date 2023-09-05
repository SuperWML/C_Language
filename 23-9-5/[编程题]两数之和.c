/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param numbers int整型一维数组 
 * @param numbersLen int numbers数组长度
 * @param target int整型 
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */
int* twoSum(int* numbers, int numbersLen, int target, int* returnSize ) {
	// write code here
	int* ret = (int*)malloc(sizeof(int)*2);
	for(int i = 0;i < numbersLen;i++)
	{
		if(numbers[i] > target)
		{
			continue;
		}
		else
		{
			for(int j = i+1;j < numbersLen;j++)
			{
				if(numbers[i] + numbers[j] == target)
				{
					ret[0] = i+1;
					ret[1] = j+1;
					*returnSize = 2;
					return ret;
				}
			}
		}
	}
	*returnSize = 0;
	return 0;
}
