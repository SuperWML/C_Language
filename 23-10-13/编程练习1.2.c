#include <stdio.h>
int main (void)
{
	int ch = 0;                          //变量ch用来接受字符
	int line = 0;                        //行号
	int line_beginner = 1;               //行首标识符吗，标识是否是行首
	while((ch = getchar()) != EOF)       //输入一个字符到ch
	{
		if(line_beginner == 1)           //判断是否在行首
		{ 
			line++;                      //行数增加
			printf ("%d ",line);         //打印对应的行号
			line_beginner = 0;           //将行首标识符赋值为0，以便打印后面的字符
		}
		putchar(ch);                     //输出字符ch到标准输出（屏幕）
		if(ch == '\n')                   //如果到了行尾（ch = getchar（）会接受字符'\n'）
		{
			line_beginner = 1;           //开启下一行，并将行首标识符设置为1
		}
	}
	return 0;
}
