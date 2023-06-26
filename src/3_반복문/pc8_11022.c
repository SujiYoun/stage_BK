#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*A + B - 8
T 테스트 케이스 개수
"Case #x: A + B = C"*/
int main(void)
{
	int T, A, B, i;

	scanf("%d", &T);
	for (i = 1; i <= T; i++) {
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n", i, A, B, A + B);
	}
	return 0;
}