#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*������
�� 10���� �Է¹��� ��,
�̸� 42�� ���� ������ ���� �ٸ� ���� �� �� �ִ��� ���*/
int main(void)
{
	int reminder[42];
	int n, i;
	int count = 0;

	for (i = 0; i < 42; i++)
		reminder[i] = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &n);
		reminder[n % 42]++;
	}
	
	for (i = 0; i < 42; i++)
		if (reminder[i] > 0)
			count++;
	printf("%d", count);
	return 0;
}