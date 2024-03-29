#include <stdio.h>
#include <math.h>

int queenPlaces[92][8]; //存放92种皇后棋子的摆放方法
int count = 0;
int board[8][8]; //仿真棋盘
void putQueen(int ithQueen); //递归函数，每次摆好一个棋子

int main()
{
	int n, i, j;
	for (i = 0; i < 8; i++)
	{ // 初始化
		for (j = 0; j < 8; j++)
			board[i][j] = -1;
		for (j = 0; j < 92; j++)
			queenPlaces[j][i] = 0;
	}
	putQueen(0); //从第0个棋子开始摆放，运行的结果是将queenPlaces生成好
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		int ith;
		scanf_s("%d", &ith);
		for (j = 0; j < 8; j++)
			printf("%d", queenPlaces[ith - 1][j]);
		printf("\n");
	}
	system("pause");
}
void putQueen(int ithQueen) {
	int i, k, r;
	if (ithQueen == 8) {
		count++;
		return;
	}
	for (i = 0; i < 8; i++) {
		if (board[i][ithQueen] == -1) {
			//摆放皇后
			board[i][ithQueen] = ithQueen;
			//将其后所有的摆放方法的第ith个皇后都放在i+1的位置上
			//在i增加以后，后面的第ith个皇后摆放方法后覆盖此时的设置
			for (k = count; k < 92; k++)
				queenPlaces[k][ithQueen] = i + 1;
			//设置控制范围
			for (k = 0; k < 8; k++)
				for (r = 0; r < 8; r++)
					if (board[k][r] == -1 &&
						(k == i || r == ithQueen || abs(k - i) == abs(r - ithQueen)))
						board[k][r] = ithQueen;
			//向下级递归
			putQueen(ithQueen + 1);
			//回溯，撤销控制范围
			for (k = 0; k < 8; k++)
				for (r = 0; r < 8; r++)
					if (board[k][r] == ithQueen) board[k][r] = -1;
		}
	}
}
