#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*A + B - 7
T 테스트 케이스의 개수
각 테스트 케이스마다 "Case #x: "를 출력한 다음 A + B 출력*/
int main(void)
{
	int T, A, B, i;
	
	scanf("%d", &T);
	for (i = 1; i <= T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i, A + B);
	}
	return 0;
}