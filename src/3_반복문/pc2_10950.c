#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*A + B - 3
테스트 케이스의 개수 T
T번 A, B를 입력받고 A + B 출력*/
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