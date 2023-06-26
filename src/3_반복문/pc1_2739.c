#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*구구단
구구단 n단 출력*/
int main(void)
{
	int n, i;
	scanf("%d", &n);

	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);
	return 0;
}