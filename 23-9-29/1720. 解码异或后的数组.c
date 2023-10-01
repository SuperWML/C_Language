

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize){
	*returnSize = encodedSize+1;
	int* ret = (int*)malloc(sizeof(int)* (*returnSize));
	ret[0] = first;
	for(int i = 0;i < encodedSize;i++)
	{
		ret[i+1] = encoded[i] ^ first;
		first = ret[i+1];
	}
	return ret;
}
