#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*�ִ�
9 x 9 �����ǿ� ������ �� �� �ִ��� ã�� �� �ִ��� ��ġ�� �࿭ ���*/
int main(void)
{
	int matrix[9][9];
	int i, j, max, maxR, maxC;

	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			scanf("%d", &matrix[i][j]);

	max = -1;
	maxR = -1;
	maxC = -1;
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			if (matrix[i][j] > max) {
				max = matrix[i][j];
				maxR = i + 1;
				maxC = j + 1;
			}

	printf("%d\n", max);
	printf("%d %d", maxR, maxC);

	return 0;
}