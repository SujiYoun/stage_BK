#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*단어 길이 재기
단어 최대 길이 100.
단어의 길이 출력*/
int main(void)
{
	char s[100];
	int len;

	scanf("%s", s);
	for (len = 0; s[len] != '\0'; len++);
	printf("%d", len);
	return 0;
}