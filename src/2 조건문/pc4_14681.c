#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�־��� ���� ��� ��и鿡 ���ϴ� ��*/
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