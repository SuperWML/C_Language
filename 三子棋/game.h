#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define ROW 3
#define COL 3
//函数功能：输出菜单
void manu(void);

//函数功能：实现游戏功能
void game(char board[][COL],int row,int col);

//函数功能：初始化棋盘，将棋盘中的每个元素都初始化为空格
void InitBoard(char board[][COL],int row,int col);

//函数功能：打印棋盘
void DisplayBoard(char board[][COL],int row,int col);

//函数功能：实现玩家下棋
void PlayerMove(char board[][COL],int row,int col);

//函数功能：实现电脑下棋
void ComputerMove(char board[][COL]);

//函数功能：实现判断输赢，函数返回*玩家赢，x电脑赢，C是游戏继续，#是平局
char Is_Win(char board[][COL],int row,int col);

//函数功能：判断是谁赢了
void Who_Win(char board[][COL],int row,int col);

//函数功能：判断棋盘是否满了
bool Is_Full(char board[][COL],int row,int col);

////函数功能：是否开启地狱难度
//bool Play_in_Hell(char x);
