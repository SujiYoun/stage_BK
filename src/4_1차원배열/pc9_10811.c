#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*바구니 뒤집기
n개 바구니 m번 바꾸기
i번째 바구니부터 j번째 바구니의 순서를 역순으로 바꾼다*/
int main(void)
{
	int *bucket;
	int n, m, p, q;
	int i, j, tmp;

	scanf("%d %d", &n, &m);
	bucket = (int*)malloc(sizeof(int) * (n + 1));
	if (!bucket) return 0;

	for (i = 0; i <= n; i++)
		bucket[i] = i;

	for (i = 0; i < m; i++) {
		scanf("%d %d", &p, &q);//바구니의 순서를 역순으로
		for (j = 0; j < (q - p + 1) / 2; j++) { //길이 / 2
			tmp = bucket[p + j];
			bucket[p + j] = bucket[q - j];
			bucket[q - j] = tmp;
		}
	}

	for (i = 1; i <= n; i++)
		printf("%d ", bucket[i]);
	
	free(bucket);
	return 0;
}