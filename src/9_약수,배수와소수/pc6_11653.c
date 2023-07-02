#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*소인수분해
정수 n을 소인수분해
n이 1인 경우 아무것도 출력x*/
int main(void)
{
	int n, i;

	scanf("%d", &n);

	while (n > 1) {
		for (i = 2; i < n; i++)
			if (n % i == 0)
				break;

		n /= i;
		printf("%d\n", i);
	}

	return 0;
}