#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*색종이
가로100세로100 흰색 도화지
가로10세로10 검은 색종이를 도화지에 붙인다
검은 영역의 넓이

색종이 n개
검은 색종이 시작 좌표 입력*/
int main(void)
{
	int paper[100][100] = {0};
	int n, x, y, i, j, k;
	int area, count = 0;

	scanf("%d", &n);
	area = n * 10 * 10;
	for (i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		for (j = x; j < x + 10; j++) {
			for (k = y; k < y + 10; k++) {
				if (paper[j][k] == 1)
					count++;
				else
					paper[j][k] = 1;
			}
		}
	}
	
	printf("%d", area - count);

	return 0;
}