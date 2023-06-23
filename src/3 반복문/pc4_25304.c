#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*영수증
* 구매한 물건의 가격과 개수로 계산한 총 금액이
영수증에 적힌 총 금액과 일치하면 Yes / No
영수증에 적힌 총 금액 1 <= X <= 1000000000
영수증에 적힌 구매한 물건의 종류 수 1 <= N <= 100
각 물건의 가격 a, 개수 b*/
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