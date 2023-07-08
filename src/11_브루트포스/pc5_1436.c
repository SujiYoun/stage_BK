#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*영화감독숌
종말의 수: 666 1666 2666 3666 4666 5666 6660 6661
n번째 종말의 수

어떤 수에 6이 적어도 3개 이상 연속으로 들어가는 수
666연속이면*/
int main(void)
{
	int n, i, count = 0;
	int num = 0, tmp;

	scanf("%d", &n);

	while (count < n) {
		num++;
		tmp = num;
		while (tmp > 0) {
			if (tmp % 1000 == 666) {
				count++;
				break;
			}
			tmp /= 10;
		}
	}
	printf("%d", num);
	return 0;
}