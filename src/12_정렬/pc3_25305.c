#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*ĿƮ����
������ ���� ���� k���� ���� ����.
���� �޴� ����� �� ������ ���� ���� ����� ����
������ �� n, ���� �޴� ����� �� k*/
void insertionSort(int* arr, int size)
{
	int i, j, k, tmp;
	for (i = 1; i < size; i++) {
		for (j = 0; j < i; j++)
			if (arr[j] > arr[i])
				break;
		tmp = arr[i];
		for (k = i; k > j; k--)
			arr[k] = arr[k - 1];
		arr[j] = tmp;
	}
}
int main(void)
{
	int* score;
	int n, k, i;

	scanf("%d %d", &n, &k);
	score = (int*)malloc(sizeof(int) * n);
	if (!score)
		return 0;

	for (i = 0; i < n; i++)
		scanf("%d", &score[i]);

	insertionSort(score, n);

	printf("%d", score[n - k]);

	free(score);
	return 0;
}