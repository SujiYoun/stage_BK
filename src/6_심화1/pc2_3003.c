#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*킹, 퀸, 룩, 비숍, 나이트, 폰
체스: 16개 (킹1, 퀸1, 룩2, 비숍2, 나이트2, 폰8
입력에서 주어진 순서대로 몇 개의 피스를 더하거나 빼야 되는 지 출력
양수라면 그 개수만큼 더해야, 음수라면 제거해야*/
int main(void)
{
	int piece[6] = {1, 1, 2, 2, 2, 8};
	int dongHyuk[6];
	int i;

	for (i = 0; i < 6; i++)
		scanf("%d", &dongHyuk[i]);

	for (i = 0; i < 6; i++)
		printf("%d ", piece[i] - dongHyuk[i]);

	return 0;
}