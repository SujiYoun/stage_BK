#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*������� ��
������: ���� n�� �ڽ��� ������ ��� ������� �հ� ����
�Է��� �������� -1

�׽�Ʈ ���̽� ����
n�� ��������� n�� n�� �ƴ� ������� ������ ��Ÿ���� ���
: 6 = 1 + 2 + 3 (��������)
n�� �������� �ƴ϶�� n is NOT perfect. ���*/
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