

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* masterMind(char* solution, char* guess, int* returnSize){
	*returnSize = 2;
	int* ret = (int*)malloc(sizeof(int) * 2);
	int Rguess = 0;
	int Vguess = 0;
	for(int i = 0;guess[i] != '\0';i++)
	{
		if(guess[i] == solution[i])
		{
			Rguess++;
			guess[i] = '0';
			solution[i] = '1';
		}
	}
	for(int i = 0;guess[i] != '\0';i++)
	{
		for(int j = 0;solution[j] != '\0';j++)
		{
			if(guess[i] == solution[j])
			{
				solution[j] = '1';
				Vguess++;
				break;
			}
		}
	}
	ret[0] = Rguess;
	ret[1] = Vguess;
	return ret;
}

