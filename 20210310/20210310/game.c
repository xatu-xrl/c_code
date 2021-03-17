#define _CRT_SECURE_NO_DEPRECATE 1
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------------------------\n");
	//�кŵĴ�ӡ
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		//�кŵĴ�ӡ
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("----------------------------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	//�������������
	//���ö��ٸ���
	int count = EASY_COUNT;
	while (count)
	{
		//���óɹ�һ���ף�count--
		//1.�����������
		int x = rand()%row+1;//1-9
		int y = rand()%col+1;//1-9
		//2.����
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS],int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
//ɨ����Ϸ����ô������
//1.ը��
//2.ȫ���ҳ�
void FindMine(char mine[ROWS][COLS],
	          char show[ROWS][COLS],
	          int row,
	          int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROWS*COLS - EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//�ж��Ƿ�����
			if (mine[x][y] == '1')
			{
				printf("�㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//��������ף����Ų�ͳ����Χ����
				int count = GetMineCount(mine,x,y);
				show[x][y]=count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}

		}
		else
		{
			printf("����Ƿ�\n");
		}
	}
	if (win == ROW*COL - EASY_COUNT)
	{
		printf("��ϲ��Ӯ�ˣ�mvp\n");
		DisplayBoard(mine, row, col);
	}
}