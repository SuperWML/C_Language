#include "game.h"

//函数功能：实现游戏菜单的打印
void manu(void)
{
	printf ("*******************************\n");
	printf ("***********1. play*************\n");
	printf ("***********0. exit*************\n");
	printf ("*******************************\n");
}

//函数功能：实现游戏功能
void game(void)
{
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);
	FindMine(mine,show,ROW,COL);
}

//函数功能：初始化棋盘
void InitBoard(char Board[][COLS],int row,int col,char simbol)
{
	for(int i = 0;i < row;i++)
	{
		for(int j = 0;j < col;j++)
		{
			Board[i][j] = simbol;
		}
	}
}

//函数功能：显示棋盘
void DisplayBoard(char Board[][COLS],int row,int col)
{
	printf ("-----WML的扫雷-----\n");
	for(int i = 0;i <= col;i++)
	{
		printf ("%d ",i);
	}
	printf ("\n");
	for(int i = 1;i <= row;i++)
	{
		printf ("%d ",i);
		for(int j = 1;j <= col;j++)
		{
			printf ("%c ",Board[i][j]);
		}
		printf ("\n");
	}
	printf ("-----WML的扫雷-----\n");
}

//函数功能：埋地雷
void SetMine(char Board[][COLS],int row,int col)
{
	int mine_count = MINE_COUNT;
	while(mine_count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		if(Board[x][y] == '0')
		{
			Board[x][y] = '1';
			mine_count--;
		}
	}
}

//函数功能：找地雷
void FindMine(char mine[][COLS],char show[][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	int safe_count = row*col - MINE_COUNT;
	while(safe_count)
	{
		printf ("请输入您想要排查的坐标,中间用空格分隔：");
		scanf("%d %d",&x,&y);
		system("cls");
		if(x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if(mine[x][y] == '1')
			{
				printf ("真可惜，踩到雷了！\n");
				DisplayBoard(mine,ROW,COL);
				break;
			}
			else
			{
				int c = MineCount(mine,x,y);
				OpenMine(mine,show,x,y);
				show[x][y] = c+'0';
				DisplayBoard(show,ROW,COL);
				safe_count--;
			}
		}
		else
		{
			printf ("坐标输入错误，请重新输入！\n");
		}
	}
	if(safe_count == 0)
	{
		printf ("恭喜啊，你赢了！\n");
	}
}

//函数功能：排查坐标周围地雷的数量
int MineCount(char mine[][COLS],int x,int y)
{
	int sum = 0;
	for(int i = x-1;i <= x+1;i++)
	{
		for(int j = y-1;j <= y+1;j++)
		{
			if(mine[x][y] == mine[i][j])
			{
				continue;
			}
			sum += (mine[i][j] - '0');
		}
	}
	return sum;
}

//函数功能：增加排雷面积
void OpenMine(char mine[][COLS],char show[][COLS],int x,int y)
{
	char mine_count = MineCount(mine,x,y)+'0';
	if(mine_count != '0')
	{
		show[x][y] = mine_count;
	}
	else if(show[x][y] != ' ')
	{
		show[x][y] = ' ';
		for(int i = x-1;i <= x+1;i++)
		{
			for(int j = y-1;j <= y+1;j++)
			{
				OpenMine(mine,show,i,j);
			}
		}
	}
	else
	{
		return;
	}
}
