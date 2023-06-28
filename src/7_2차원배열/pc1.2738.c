#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*��� ����
n * m ũ���� �� ��� A, B�� �־����� ��, �� ����� ���� ����� ���*/
void input(int** arr, int r, int c) {
	int i, j;
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &arr[i][j]);

	return;
}
int main(void)
{
	int** A, ** B;
	int n, m, i, j;

	scanf("%d %d", &n, &m);
	A = (int**)malloc(sizeof(int*) * n);
	B = (int**)malloc(sizeof(int*) * n);
	for (i = 0; i < n; i++) {
		A[i] = (int*)malloc(sizeof(int) * m);
		B[i] = (int*)malloc(sizeof(int) * m);
	}
	if (!A || !B)
		return 0;

	input(A, n, m);
	input(B, n, m);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", A[i][j] + B[i][j]);
		printf("\n");
	}

	free(A);
	free(B);
	return 0;
}