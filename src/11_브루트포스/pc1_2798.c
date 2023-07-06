#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*����
n���� ī�� �߿��� 3���� ī�带 ��� ī���� ���� m�� ���� �����鼭 �ִ��� ������
�� ���*/
void input(int* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	return;
}
void pick(int *card, int M, int n, int* picked, int m, int toPick, int* sum)
{
	int i, smallest, lastIndex;
	if (toPick == 0) {
		int tmp = 0;
		for (i = 0; i < m; i++) {
			//printf("%d ", card[picked[i]]);
			tmp += card[picked[i]];
		}

		if (tmp > *sum && tmp <= M)
			*sum = tmp;

		return;
	}

	lastIndex = m - toPick - 1;
	if (toPick == m)
		smallest = 0;
	else
		smallest = picked[lastIndex] + 1;

	if (toPick > 0) {
		for (i = smallest; i < n; i++) {
			picked[lastIndex + 1] = i;
			pick(card, M, n, picked, m, toPick - 1, sum);
		}
	}
}
int main(void)
{
	int* card;
	int picked[3];
	int N, M, sum = 0;

	scanf("%d %d", &N, &M);
	card = (int*)malloc(sizeof(int) * N);
	if (!card)
		return 0;
	input(card, N);

	//����
	pick(card, M, N, picked, 3, 3, &sum);

	printf("%d", sum);
	
	free(card);
	return 0;
}