#include <stdio.h>
#include <math.h>

int queenPlaces[92][8]; //���92�ֻʺ����ӵİڷŷ���
int count = 0;
int board[8][8]; //��������
void putQueen(int ithQueen); //�ݹ麯����ÿ�ΰں�һ������

int main()
{
	int n, i, j;
	for (i = 0; i < 8; i++)
	{ // ��ʼ��
		for (j = 0; j < 8; j++)
			board[i][j] = -1;
		for (j = 0; j < 92; j++)
			queenPlaces[j][i] = 0;
	}
	putQueen(0); //�ӵ�0�����ӿ�ʼ�ڷţ����еĽ���ǽ�queenPlaces���ɺ�
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
			//�ڷŻʺ�
			board[i][ithQueen] = ithQueen;
			//��������еİڷŷ����ĵ�ith���ʺ󶼷���i+1��λ����
			//��i�����Ժ󣬺���ĵ�ith���ʺ�ڷŷ����󸲸Ǵ�ʱ������
			for (k = count; k < 92; k++)
				queenPlaces[k][ithQueen] = i + 1;
			//���ÿ��Ʒ�Χ
			for (k = 0; k < 8; k++)
				for (r = 0; r < 8; r++)
					if (board[k][r] == -1 &&
						(k == i || r == ithQueen || abs(k - i) == abs(r - ithQueen)))
						board[k][r] = ithQueen;
			//���¼��ݹ�
			putQueen(ithQueen + 1);
			//���ݣ��������Ʒ�Χ
			for (k = 0; k < 8; k++)
				for (r = 0; r < 8; r++)
					if (board[k][r] == ithQueen) board[k][r] = -1;
		}
	}
}
