#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�Ҽ�
m�̻� n������ �ڿ��� �� �Ҽ��� ���� ��� ã��
ù° �ٿ� �� ����, ��° �ٿ� �� �� �ּڰ��� ���
�Ҽ��� ���� ���� -1 ���*/
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