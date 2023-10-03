

int minCount(int* coins, int coinsSize){
	int sum = 0;
	for(int i = 0;i < coinsSize;i++)
	{
		if(coins[i] % 2 == 0)
		{
			sum += coins[i]/2;
		}
		else
		{
			sum += coins[i]/2 + 1;
		}
	}
	return sum;
}

