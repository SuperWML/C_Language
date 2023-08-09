/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param n int整型 最大位数
 * @return int整型一维数组
 * @return int* returnSize 返回数组行数
 */
static int arr[110000] = {0};
int* printNumbers(int n, int* returnSize ) {
	// write code here
	int i = 0;
	int result = 1;
	for(i = 0;i < n;i++)
	{
		result *= 10;
	}
	for(i = 1;i < result;i++)
	{
		arr[i-1] = i;
	}
	*returnSize = --i;
	return arr;
}
