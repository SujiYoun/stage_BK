#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*소수
m이상 n이하의 자연수 중 소수인 것을 모두 찾아
첫째 줄에 그 합을, 둘째 줄에 그 중 최솟값을 출력
소수가 없을 경우는 -1 출력*/
int main(void)
{
	int m, n, i, j;
	int sum = 0, min, flag;

	scanf("%d %d", &m, &n);
	min = n + 1;
	for (i = m; i <= n; i++) {
		flag = 1;
		for (j = 2; j < i; j++)
			if (i % j == 0)
				flag = 0;

		if (flag == 1 && i != 1) {
			sum += i;
			if (i < min)
				min = i;
		}
	}

	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);

	return 0;
}