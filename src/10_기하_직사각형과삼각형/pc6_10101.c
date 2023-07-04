#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*삼각형 외우기
* 삼각형의 각의 크기가 주어짐
세 각의 크기가 모두 60이면, Equilateral
세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
세 각의 합이 180이 아닌 경우에는 Error*/
int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a + b + c != 180) {
		printf("Error");
		return 0;
	}

	else if (a == 60 && b == 60)
		printf("Equilateral");
	else if (a == b || b == c || c == a)
		printf("Isosceles");
	else
		printf("Scalene");

	return 0;
}