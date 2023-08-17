#include <stdio.h>
int Find_Mine(int row, int col, char board[][col]);
int main (void) {
	int count = 0;
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	char arr[n + 2][n + 2];
	for (int i = 0; i < n + 2; i++) {
		for (int j = 0; j < m + 2; j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf(" %c ", &arr[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			count = 0;
			if (arr[i][j] == '.') {
				if (arr[i - 1][j - 1] == '*') {
					count++;
				}
				if(arr[i-1][j] == '*')
				{
					count++;
				}
				if(arr[i-1][j+1] == '*')
				{
					count++;
				}
				if(arr[i][j+1] == '*')
				{
					count++;
				}
				if(arr[i][j-1] == '*')
				{
					count++;
				}
				if(arr[i+1][j-1] == '*')
				{
					count++;
				}
				if(arr[i+1][j] == '*')
				{
					count++;
				}
				if(arr[i+1][j+1] == '*')
				{
					count++;
				}
				arr[i][j] = count + '0';
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf ("%c", arr[i][j]);
		}
		printf ("\n");
	}
	return 0;
}

