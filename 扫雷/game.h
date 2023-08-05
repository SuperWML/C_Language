#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE_COUNT 10

//函数功能：实现游戏菜单的打印
void manu(void);

//函数功能：实现游戏功能
void game(void);

//函数功能：初始化棋盘
void InitBoard(char Board[][COLS],int row,int col,char simbol);

//函数功能：显示棋盘
void DisplayBoard(char Board[][COLS],int row,int col);

//函数功能：埋地雷
void SetMine(char Board[][COLS],int row,int col);

//函数功能：找地雷
void FindMine(char mine[][COLS],char show[][COLS],int row,int col);

//函数功能：排查坐标周围地雷的数量
int MineCount(char mine[][COLS],int x,int y);

//函数功能：增加排雷面积
void OpenMine(char mine[][COLS],char show[][COLS],int x,int y);
