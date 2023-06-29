#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*중앙 이동 알고리즘
1. 정사각형의 각 변의 중앙에 점을 하나 추가.
2. 정사각형의 중심에 점을 하나 추가.

겹치는 부분이 있음
초기: 점 4
1: 9 = 변 4 + 중앙 1
2: 25 = 9 + 변 12(사각형 * 사각형 변 개수 - 겹치는 부분) + 중앙 4
3: 56 = 25 + 변 

밖 : (r + c) * 2
안 가로 : r * (c - 1)
안 세로 : c *(r - 1)
안 중앙 : r * c*/
int main(void)
{
	int n;
	int dots = 4, square, side, i;
	int r = 1, c = 1;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		side = (r + c) * 2 + r * (c - 1) + c * (r - 1);
		square = r * c;
		dots += side + square;

		r *= 2; c *= 2;
	}

	printf("%d", dots);

	return 0;
}