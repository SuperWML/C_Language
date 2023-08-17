#include <stdio.h>
char Is_Win(char board[][3],int row,int col);
int main (void)
{
	char board[3][3] = {0};
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			scanf("%c ",&board[i][j]);
		}
	}
	if(Is_Win(board,3,3) == 'K')
	{
		printf ("KiKi wins!\n");
	}
	else if(Is_Win(board,3,3) == 'B')
	{
		printf ("BoBo wins!\n");
	}
	else
	{
		printf ("No winner!\n");
	}
	return 0;
}
//函数功能：判断输赢
char Is_Win(char board[][3],int row,int col)
{
	for(int i = 0;i < row;i++)
	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != 'O')
		{
			return board[i][0];
		}
	}
	for(int i = 0;i < col;i++)
	{
		if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != 'O')
		{
			return board[0][i];
		}
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != 'O')
	{
		return board[0][0];
	}
	else if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != 'O')
	{
		return board[0][2];
	}
	return 'O';
}
