#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���
���� ���� �� �ڸ� �� A, B�� �Ųٷ� �Ͽ� �� ū �� ���*/
int main(void)
{
	char A[5], B[5];
	int a = 0, b = 0, i;

	scanf("%s %s", &A, &B);
	for (i = 2; i >= 0; i--) {
		a *= 10;
		a += A[i] - '0';

		b *= 10;
		b += B[i] - '0';
	}

	if (a > b)
		printf("%d", a);
	else
		printf("%d", b);
	return 0;
}