#include "game.h"
//函数功能：打印菜单
void manu(void)
{
	printf ("***********************************\n");
	printf ("*************1. play***************\n");
	printf ("*************0. exit***************\n");
	printf ("***********************************\n");
}
//函数功能：实现游戏功能
void game(char board[][COL],int row,int col)
{
	InitBoard(board,row,col);
	DisplayBoard(board,row,col);
	while(1)
	{
		PlayerMove(board,row,col);
		DisplayBoard(board,row,col);
		if('C' != Is_Win(board,row,col))
		{
			Who_Win(board,row,col);
			break;
		}
		ComputerMove(board);
		DisplayBoard(board,row,col);
		if('C' != Is_Win(board,row,col))
		{
			Who_Win(board,row,col);
			break;
		}
	}
}
//函数功能：初始化棋盘，将棋盘中的每个元素都初始化为空格
void InitBoard(char board[][COL],int row,int col)
{
	for(int i = 0; i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

//函数功能：打印棋盘
void DisplayBoard(char board[][COL],int row,int col)
{
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			printf (" %c ",board[i][j]);
			if(j < col-1)
			{
				printf ("|");
			}
		}
		printf ("\n");
		for(int j  = 0; j < col; j++)
		{
			if(i < row-1)
			{
				printf ("——");
			}
		}
		printf ("\n");
	}
}

//函数功能：实现玩家下棋
void PlayerMove(char board[][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	while(1)
	{
		printf ("玩家下棋，请输入坐标，中间用空格隔开，坐标的范围是1-3：");
		scanf("%d %d",&x,&y);
		if(x >= 1 && x <= row && y >= 1 && y <= col)
		{
			board[x-1][y-1] = '*';
			break;
		}
		else
		{
			printf ("输入错误，请重新输入！\n");
		}
	}
}

//函数功能：实现电脑下棋
void ComputerMove(char board[][COL])
{
	printf ("电脑下棋：\n");
	while(1)
	{
		int x = rand()%3;
		int y = rand()%3;
		if(board[x][y] == ' ')
		{
			board[x][y] = 'x';
			break;
		}
	}
}

//函数功能：实现判断输赢，函数返回*玩家赢，x电脑赢，C是游戏继续，#是平局
char Is_Win(char board[][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < row;i++)
	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][0];
		}
	}
	
	for(j = 0;j < col;j++)
	{
		if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] != ' ')
		{
			return board[0][j];
		}
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
	{
		return board[0][0];
	}
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
	{
		return board[0][2];
	}
	if(Is_Full(board,row,col) == 1)
	{
		return '#';
	}
	else
	{
		return 'C';
	}
}

//函数功能：判断棋盘是否满了
bool Is_Full(char board[][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < row;i++)
	{
		for(j = 0;j < col;j++)
		{
			if(board[i][j] == ' ')
			{
				return false;
			}
		}
	}
	return true;
}

//函数功能：判断是谁赢了
void Who_Win(char board[][COL],int row,int col)
{
	if(Is_Win(board,row,col) == '*')
	{
		printf ("恭喜你，你赢了！\n");
	}
	else if(Is_Win(board,row,col) == 'x')
	{
		printf ("可惜啊，电脑赢了:(\n");
	}
	else if(Is_Win(board,row,col) == '#')
	{
		printf ("不错啊，平局！\n");
	}
}
