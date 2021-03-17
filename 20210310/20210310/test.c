#define _CRT_SECURE_NO_DEPRECATE 1
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("****   1. play    ****\n");
	printf("****   0. exit    ****\n");
	printf("**********************\n");
}
void game()
{
	//真正扫雷的过程
	//创建两个数组
	char mine[ROWS][COLS] = { 0 };//布置好的雷'
	char show[ROWS][COLS] = { 0 };//存放排查好的雷
	InitBoard(mine, ROWS, COLS,'0'); 
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(show, ROW, COL);
	//布置好的雷不应该轻易打印
	//DisplayBoard(mine, ROW, COL);
	//1.布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//2.扫雷
	FindMine(mine,show,ROW,COL);
	
}
int main()
{
	int input = 0;
	//time_t本质上是一个整形
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}