#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*문자열
* 테스트 케이스 T개
문자열의 첫 글자와 마지막 글자 출력
*/
int main(void)
{
	char s[1000];
	int T, i, len;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%s", s);
		for (len = 0; s[len] != '\0'; len++);
		printf("%c%c\n", s[0], s[len - 1]);
	}

	return 0;
}