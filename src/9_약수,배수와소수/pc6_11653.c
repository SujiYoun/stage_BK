#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���μ�����
���� n�� ���μ�����
n�� 1�� ��� �ƹ��͵� ���x*/
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