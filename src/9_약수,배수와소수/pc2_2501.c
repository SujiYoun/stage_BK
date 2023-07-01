#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*약수 구하기
두 개의 자연수 N, K
N의 약수들 중 K번째로 작은 수 출력*/
int main(void)
{
	int n, k;
	int i, count = 0;

	scanf("%d %d", &n, &k);

	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			count++;
		if (count == k)
			break;
	}

	if (count < k)
		printf("0");
	else
		printf("%d", i);

	return 0;
}