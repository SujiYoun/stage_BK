#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*체스판 다시 칠하기
M * N 크기의 보드를 잘라서 8 * 8 크기의 체스판으로 만든다
각 칸이 검은색과 흰색 중 하나로 색칠되어 있고, 변을 공유하는 두 개의 사각형은 다른 색으로 칠해져 있어야 한다.
1. 맨 왼쪽 위 칸이 흰색인 경우 2. 맨 왼쪽 위 칸이 검은색인 경우
다시 칠해야 하는 정사각형의 최소 개수 출력
*/
void readBoard(char** b, int r)
{
	int i;
	for (i = 0; i < r; i++)
		scanf("%s", b[i]);
	return;
}
int check(char** board, int stX, int stY)
{
	//맨왼위 흰 count1
	//i짝 | j짝 W j홀 B //i홀 | j짝 B j홀 W
	//맨왼위 검 count2
	//i짝 | j짝 B j홀 W //i홀 | j짝 W j홀 B
	int i, j, count1 = 0, count2 = 0;
	for (i = stX; i < stX + 8; i++)
		for (j = stY; j < stY + 8; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					if (board[i][j] != 'W')
						count1++;
					else
						count2++;
				}
				else { //j % 2 == 1
					if (board[i][j] != 'B')
						count1++;
					else
						count2++;
				}
			}
			else {// (i % 2 == 1)
				if (j % 2 == 0) {
					if (board[i][j] != 'B')
						count1++;
					else
						count2++;
				}
				else { //j % 2 == 1
					if (board[i][j] != 'W')
						count1++;
					else
						count2++;
				}
			}
		}
	if (count1 < count2)
		return count1;
	else
		return count2;
}
int main(void)
{
	char** board;
	int n, m, i, j;
	int count = 64, tmp1, tmp2, tmpCnt;

	scanf("%d %d", &n, &m);
	//문자열의 경우 마지막에 NULL이 들어가야 하므로 5X5 배열이 아닌 5X6 배열이 되어야 한다.
	board = (char**)malloc(sizeof(char*) * n);
	for (i = 0; i < n; i++)
		board[i] = (char*)malloc(sizeof(char) * (m + 1));
	if (!board)
		return 0;

	readBoard(board, n);

	for (i = 0; i <= n - 8; i++) {
		for (j = 0; j <= m - 8; j++) {
			tmpCnt = check(board, i, j);
			if (tmpCnt < count)
				count = tmpCnt;
		}
	}

	printf("%d", count);

	free(board);
	return 0;
}