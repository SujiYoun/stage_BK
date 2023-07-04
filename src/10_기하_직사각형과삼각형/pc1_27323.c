#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*직사각형
세로 Acm, 가로 Bcm인 직사각형의 넓이
1 <= A, B <= 100*/
int main(void)
{
	int A, B;

	scanf("%d %d", &A, &B);

	printf("%d", A * B);

	return 0;
}