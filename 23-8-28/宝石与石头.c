int numJewelsInStones(char * jewels, char * stones){
	int jewelsCount = 0;
	int jewelsLength = strlen(jewels),stonesLength = strlen(stones);
	for(int i = 0;i < stonesLength;i++)
	{
		char stones1 = stones[i];
		for(int j = 0;j < jewelsLength;j++)
		{
			char jewels2 = jewels[j];
			if(stones1 == jewels2)
			{
				jewelsCount++;
				break;
			}
		}
	}
	return jewelsCount;
}
