#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*주어진 점이 어느 사분면에 속하는 지*/
int main(void)
{
	int x, y;
	int quadrant;

	scanf("%d %d", &x, &y);
	if (x > 0) {
		if (y > 0)
			quadrant = 1;
		else //y < 0
			quadrant = 4;
	}
	else { //x < 0
		if (y > 0)
			quadrant = 2;
		else //y < 0
			quadrant = 3;
	}

	printf("%d", quadrant);

	return 0;
}