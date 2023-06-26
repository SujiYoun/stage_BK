#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*공 넣기
n개의 바구니, m번 공을 넣는다
i번 바구니부터 j번 바구니까지 k번 번호가 적혀져 있는 공을 넣는다
바구니에 공이 이미 있는 경우에는 들어있는 공을 빼고, 새로 공을 넣는다.
바구니에 들어있는 공의 번호를 출력.
공이 들어있지 않은 바구니는 0을 출력*/
int main(void)
{
	int* bucket;
	int n, m, p, r, ball, i, j;

	scanf("%d %d", &n, &m);
	bucket = (int*)malloc(sizeof(int) * (n + 1)); //1 ~ n번까지
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