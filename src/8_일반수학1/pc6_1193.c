#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*분수찾기
X번째 분수 구하기

1/1 :→ 1/2 → 2/1: → 3/1 → 2/2 → 1/3: → 1/4 → 2/3 → 3/2 → 4/1: → 5/1 →...
*/
int main(void)
{
	int x, cnt, i;
	int top, bottom;
	int line = 1, startNum = 1, endNum = 1;

	scanf("%d", &x);
	while (x > endNum) {
		startNum = endNum + 1;
		line++;
		endNum += line;
	}

	if (line % 2 == 0) { //짝수줄 i++ j--
		top = 1;
		bottom = line;
		for (cnt = startNum; cnt < x; cnt++) {
			top++;
			bottom--;
		}
	}
	else { //홀수줄 i-- j++
		top = line;
		bottom = 1;
		for (cnt = startNum; cnt < x; cnt++) {
			top--;
			bottom++;
		}
	}

	printf("%d/%d", top, bottom);
	return 0;
}