#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*직사각형에서 탈출
(x, y)에서 직사각형의 경계선까지 가는 거리의 최솟값
직사각형은 각 변이 좌표축에 평행하고,
왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w, h)에 있다.
1 ≤ w, h ≤ 1,000
1 ≤ x ≤ w-1
1 ≤ y ≤ h-1*/
int main(void)
{
	int x, y, w, h;
	int distance;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	//왼 : x
	//오 : w - x
	//위 : h - y
	//아래 : y

	distance = x;
	if (w - x < distance)
		distance = w - x;
	if (y < distance)
		distance = y;
	if (h - y < distance)
		distance = h - y;

	printf("%d", distance);
	return 0;
}