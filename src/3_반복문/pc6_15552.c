#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*빠른 A + B
C의 scanf, printf는 충분히 빠릅니다.
T 테스트케이스의 개수 <= 1000000
A + B*/
int main(void)
{
	int T, A, B, i;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}