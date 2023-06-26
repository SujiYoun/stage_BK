#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*A + B - 4
0 < A, B < 10
더 이상 읽어들일 수 있는 값이 없을 대 scanf 호출시 EOF 반환*/
int main(void)
{
	int A, B, i;
	/*for (i = 0; scanf("%d %d", &A, &B) != EOF; i++)
		printf("%d\n", A + B);*/
	while (scanf("%d %d", &A, &B) != EOF)
		printf("%d\n", A + B);

	return 0;
}