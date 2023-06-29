#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*벌집
1번방에서 n번 방까지 갈 때 통과하는 최소 개수 방
1 : 1
2~7(6) : 2
8~19(12) : 3
20~37(18) : 4
*/
int main(void)
{
	int n, i;
	int roomCnt = 1; //겹수
	int hiveNum = 1; //벌집 개수

	scanf("%d", &n);

	while (n > hiveNum) {
		hiveNum += 6 * roomCnt;
		roomCnt++;
	}

	printf("%d", roomCnt);
	return 0;
}