#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*��� ���ϱ�
�� ���� �ڿ��� N, K
N�� ����� �� K��°�� ���� �� ���*/
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