

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* masterMind(char* solution, char* guess, int* returnSize){
	int Rguess = 0;
	int Vguess = 0;
	int* ret = (int*)malloc(sizeof(int)*2);
	*returnSize = 2;
	for(int i = 0;solution[i] != '\0';i++)
	{
		if(solution[i] == guess[i])
		{
			Rguess++;
			solution[i] = '0';
			guess[i] = '1';
		}
	}
	for(int i = 0;guess[i] != '\0';i++)
	{
		for(int j = 0;solution[j] != '\0';j++)
		{
			if(guess[i] == solution[j])
			{
				solution[j] = '0';
				Vguess++;
				break;
			}
		}
	}
	ret[0] = Rguess;
	ret[1] = Vguess;
	return ret;
}

