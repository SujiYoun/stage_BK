#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�� ��° ��
�� ���� �־����� ��, �࿡ ������ ���簢���� ����� ���ؼ� �ʿ��� �� ��° ���� ã��*/
struct Dot {
	int x;
	int y;
};
int compare(int a, int b, int c)
{
	if (a == b)
		return c;
	else if (a == c)
		return b;
	else
		return a;
}
int main(void)
{
	struct Dot dots[4];
	int i;

	for (i = 0; i < 3; i++) {
		scanf("%d %d", &dots[i].x, &dots[i].y);
	}
	
	dots[3].x = compare(dots[0].x, dots[1].x, dots[2].x);
	dots[3].y = compare(dots[0].y, dots[1].y, dots[2].y);

	printf("%d %d", dots[3].x, dots[3].y);
	return 0;
}