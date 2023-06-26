#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*�� �ٲٱ�
n�� �ٱ���(1~n), ó���� �ٱ��� ��ȣ�� ���� ��ȣ ��
m�� ���� �ٲ۴�. i�� �ٱ��Ͽ� j�� �ٱ��Ͽ� ����ִ� ���� ��ȯ*/
int main(void)
{
	int* bucket;
	int n, m, p, q, i, tmp;

	scanf("%d %d", &n, &m);
	bucket = (int*)malloc(sizeof(int) * (n + 1));
	if (!bucket) return 0;

	for (i = 0; i <= n; i++)
		bucket[i] = i;

	for (i = 0; i < m; i++) {
		scanf("%d %d", &p, &q);
		tmp = bucket[p];
		bucket[p] = bucket[q];
		bucket[q] = tmp;
	}

	for (i = 1; i <= n; i++)
		printf("%d ", bucket[i]);

	free(bucket);
	return 0;
}