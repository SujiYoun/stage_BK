#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*ü���� �ٽ� ĥ�ϱ�
M * N ũ���� ���带 �߶� 8 * 8 ũ���� ü�������� �����
�� ĭ�� �������� ��� �� �ϳ��� ��ĥ�Ǿ� �ְ�, ���� �����ϴ� �� ���� �簢���� �ٸ� ������ ĥ���� �־�� �Ѵ�.
1. �� ���� �� ĭ�� ����� ��� 2. �� ���� �� ĭ�� �������� ���
�ٽ� ĥ�ؾ� �ϴ� ���簢���� �ּ� ���� ���
*/
void readBoard(char** b, int r)
{
	int i;
	for (i = 0; i < r; i++)
		scanf("%s", b[i]);
	return;
}
int check(char** board, int stX, int stY)
{
	//�ǿ��� �� count1
	//i¦ | j¦ W jȦ B //iȦ | j¦ B jȦ W
	//�ǿ��� �� count2
	//i¦ | j¦ B jȦ W //iȦ | j¦ W jȦ B
	int i, j, count1 = 0, count2 = 0;
	for (i = stX; i < stX + 8; i++)
		for (j = stY; j < stY + 8; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					if (board[i][j] != 'W')
						count1++;
					else
						count2++;
				}
				else { //j % 2 == 1
					if (board[i][j] != 'B')
						count1++;
					else
						count2++;
				}
			}
			else {// (i % 2 == 1)
				if (j % 2 == 0) {
					if (board[i][j] != 'B')
						count1++;
					else
						count2++;
				}
				else { //j % 2 == 1
					if (board[i][j] != 'W')
						count1++;
					else
						count2++;
				}
			}
		}
	if (count1 < count2)
		return count1;
	else
		return count2;
}
int main(void)
{
	char** board;
	int n, m, i, j;
	int count = 64, tmp1, tmp2, tmpCnt;

	scanf("%d %d", &n, &m);
	//���ڿ��� ��� �������� NULL�� ���� �ϹǷ� 5X5 �迭�� �ƴ� 5X6 �迭�� �Ǿ�� �Ѵ�.
	board = (char**)malloc(sizeof(char*) * n);
	for (i = 0; i < n; i++)
		board[i] = (char*)malloc(sizeof(char) * (m + 1));
	if (!board)
		return 0;

	readBoard(board, n);

	for (i = 0; i <= n - 8; i++) {
		for (j = 0; j <= m - 8; j++) {
			tmpCnt = check(board, i, j);
			if (tmpCnt < count)
				count = tmpCnt;
		}
	}

	printf("%d", count);

	free(board);
	return 0;
}