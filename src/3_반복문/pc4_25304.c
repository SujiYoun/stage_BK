#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*������
* ������ ������ ���ݰ� ������ ����� �� �ݾ���
�������� ���� �� �ݾװ� ��ġ�ϸ� Yes / No
�������� ���� �� �ݾ� 1 <= X <= 1000000000
�������� ���� ������ ������ ���� �� 1 <= N <= 100
�� ������ ���� a, ���� b*/
int main(void)
{
	long X;
	int N, a, b, i;
	int total = 0;

	scanf("%d", &X);
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		total += a * b;
	}

	if (X == total)
		printf("Yes");
	else
		printf("No");

	return 0;
}