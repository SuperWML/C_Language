int convertInteger(int A, int B){
	long long int c = A^B;
	int count = 0;
	for(int i = 0;i < 32;i++)
	{
		if(c & 1 == 1)
		{
			count++;
			c >>= 1;
		}
		else
		{
			c >>= 1;
		}
	}
	return count;
}
