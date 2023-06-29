#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*세탁소 사장 동혁
거스름돈 계산 (달러)
테스트 T 개, 거스름돈 C (센트) (1$ == 100센트)
최소 쿼터(0.25$) 개수, 다임(0.10$) 개수, 니켈(0.05$) 개수, 페니(0.01$)개수 출력
1쿼터 == 25센트, 1다임 == 10센트, 1니켈 == 5센트, 1페니 == 1센트
*/
int main(void)
{
	int T, C, i;
	int quarter, dime, nickel, penny;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &C);

		quarter = C / 25;
		C -= quarter * 25;
		dime = C / 10;
		C -= dime * 10;
		nickel = C / 5;
		C -= nickel * 5;
		penny = C / 1;

		printf("%d %d %d %d\n", quarter, dime, nickel, penny);
	}

	return 0;
}