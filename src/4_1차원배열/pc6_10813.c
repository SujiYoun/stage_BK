#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*공 바꾸기
n개 바구니(1~n), 처음엔 바구니 번호와 같은 번호 공
m번 공을 바꾼다. i번 바구니와 j번 바구니에 들어있는 공을 교환*/
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