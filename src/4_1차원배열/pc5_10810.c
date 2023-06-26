#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*�� �ֱ�
n���� �ٱ���, m�� ���� �ִ´�
i�� �ٱ��Ϻ��� j�� �ٱ��ϱ��� k�� ��ȣ�� ������ �ִ� ���� �ִ´�
�ٱ��Ͽ� ���� �̹� �ִ� ��쿡�� ����ִ� ���� ����, ���� ���� �ִ´�.
�ٱ��Ͽ� ����ִ� ���� ��ȣ�� ���.
���� ������� ���� �ٱ��ϴ� 0�� ���*/
int main(void)
{
	int* bucket;
	int n, m, p, r, ball, i, j;

	scanf("%d %d", &n, &m);
	bucket = (int*)malloc(sizeof(int) * (n + 1)); //1 ~ n������
	if (!bucket) return 0;

	for (i = 0; i < n + 1; i++)
		bucket[i] = 0;

	for (i = 0; i < m; i++) {
		scanf("%d %d %d", &p, &r, &ball);
		for (j = p; j <=r; j++)
			bucket[j] = ball;
	}

	for (i = 1; i < n + 1; i++)
		printf("%d ", bucket[i]);

	free(bucket);
	return 0;
}