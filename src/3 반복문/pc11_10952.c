#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*A + B - 5
0 0�� �ԷµǸ� �׸�*/
int main(void)
{
	int A, B;

	scanf("%d %d", &A, &B);
	while (A != 0 || B != 0) {
		printf("%d\n", A + B);
		scanf("%d %d", &A, &B);
	}

	return 0;
}