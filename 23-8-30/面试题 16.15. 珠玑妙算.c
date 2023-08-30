#include <stdio.h>
#include <malloc.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* masterMind(char* solution, char* guess, int* returnSize){
	int Rguess = 0,Vguess = 0;
	*returnSize = 2;
	int* ret = (int*)malloc(sizeof(int) * 2);
	for(int i = 0;solution[i] != '\0';i++)
	{
		if(solution[i] == guess[i])
		{
			Rguess++;
			solution[i] = '0';
			guess[i] = '1';
		}
	}
	for(int j = 0;guess[j] != '\0';j++)
	{
		for(int i = 0;solution[i] != '\0';i++)
		{
			if(guess[j] == solution[i])
			{
				Vguess++;
				solution[i] = '0';
				break;
			}
		}
	}
	ret[0] = Rguess;
	ret[1] = Vguess;
	printf ("%d %d",Rguess,Vguess);
	return ret;
}
int main (void)
{
	char arr1[10] = "BRBB";
	char arr2[10] = "RBGY";
	int  returnSize = 0;
	int* ret = masterMind(arr1,arr2,&returnSize);
	return 0;
}
