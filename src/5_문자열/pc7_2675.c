#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*문자열 반복
테스트 케이스 개수 T개
문자열 S, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력*/
int main(void)
{
	char S[21];
	char P[161];
	int T, R, i, j, k, idx;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %s", &R, S);
		idx = 0;
		for (j = 0; S[j] != '\0'; j++) {
			for (k = 0; k < R; k++)
				P[idx++] = S[j];
		}
		P[idx] = '\0';
		printf("%s\n", P);
	}
	return 0;
}