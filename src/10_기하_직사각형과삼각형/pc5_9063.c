#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*대지
옥구술 위치 n개
대지의 넓이 계산*/
struct Dot {
	int x;
	int y;
};
int main(void)
{
	struct Dot* dots;
	int n, i, area;
	int xMin, xMax, yMin, yMax;

	scanf("%d", &n);
	dots = (struct Dot*)malloc(sizeof(struct Dot) * n);

	for (i = 0; i < n; i++)
		scanf("%d %d", &dots[i].x, &dots[i].y);

	xMin = dots[0].x; 
	xMax = dots[0].x;
	yMin = dots[0].y;
	yMax = dots[0].y;
	for (i = 0; i < n; i++) {
		if (dots[i].x < xMin)
			xMin = dots[i].x;
		else if (dots[i].x > xMax)
			xMax = dots[i].x;

		if (dots[i].y < yMin)
			yMin = dots[i].y;
		else if (dots[i].y > yMax)
			yMax = dots[i].y;
	}
	area = (xMax - xMin) * (yMax - yMin);
	printf("%d", area);

	return 0;
}