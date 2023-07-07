#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*수학은 비대면강의입니다
수현이가 버추얼 친구들을 만나러 버추얼 세계로 떠날 수 있게 도와주자.
ax + by = c
dx + ey = f

a, b, c, d, e, f 입력
언급한 방정식을 유일하게 만족하는 x, y 출력*/
int check(int a, int b, int c, int d, int e, int f, int x, int y)
{
	if (a * x + b * y != c)
		return 0;
	if (d * x + e * y != f)
		return 0;
	return 1;
}

int main(void)
{
	int a, b, c, d, e, f;
	int x, y;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	for (x = -999; x <= 999; x++) {
		for (y = -999; y <= 999; y++)
			if (check(a, b, c, d, e, f, x, y) == 1)
				printf("%d %d", x, y);
	}
	
	return 0;
}