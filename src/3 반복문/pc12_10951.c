#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*A + B - 4
0 < A, B < 10
�� �̻� �о���� �� �ִ� ���� ���� �� scanf ȣ��� EOF ��ȯ*/
int main(void)
{
	int A, B, i;
	/*for (i = 0; scanf("%d %d", &A, &B) != EOF; i++)
		printf("%d\n", A + B);*/
	while (scanf("%d %d", &A, &B) != EOF)
		printf("%d\n", A + B);

	return 0;
}