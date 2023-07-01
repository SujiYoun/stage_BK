#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*약수들의 합
완전수: 숫자 n이 자신을 제외한 모든 약수들의 합과 같음
입력의 마지막엔 -1

테스트 케이스 마다
n이 완전수라면 n을 n이 아닌 약수들의 합으로 나타내어 출력
: 6 = 1 + 2 + 3 (오름차순)
n이 완전수가 아니라면 n is NOT perfect. 출력*/
int main(void)
{
	int n;
	int i, j, idx, sum;
	int nums[10];

	scanf("%d", &n);
	while (n != -1) {
		sum = 0; idx = 0;
		for (i = 1; i < n; i++)
			if (n % i == 0) {
				sum += i;
				nums[idx++] = i;
			}

		if (sum == n) {
			printf("%d = ", n);
			for (i = 0; i < idx; i++) {
				if (i == 0)
					printf("%d ", nums[i]);
				else
					printf("+ %d ", nums[i]);
			}
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n", n);

		scanf("%d", &n);
	}

	return 0;
}