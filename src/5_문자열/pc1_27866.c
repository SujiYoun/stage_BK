#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*문자와 문자열
단어 S의 i번째 글자 출력*/
int main(void)
{
	char S[1000];
	int i;

	scanf("%s %d", S, &i);
	printf("%c", S[i - 1]);
	return 0;
}