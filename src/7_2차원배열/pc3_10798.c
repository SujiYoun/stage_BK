#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*세로읽기
* 1~15개의 글자들이 빈칸 없이 주어진다.
* A~Z, a~z, 0~9
* 세로로 읽은 순서대로 글자를 공백없이 출력
*/
int main(void)
{
	char** s;
	int i, j, maxLen;

	s = (char**)malloc(sizeof(char*) * 5);
	for (i = 0; i < 5; i++)
		s[i] = (char*)malloc(sizeof(char) * 15);
	if (!s)
		return 0;

	maxLen = -1;
	for (i = 0; i < 5; i++) {
		scanf("%s", s[i]);
		if ((int)strlen(s[i]) > maxLen)
			maxLen = strlen(s[i]);
	}

	for (j = 0; j < maxLen ; j++) {
		for (i = 0; i < 5; i++) {
			if (s[i][j] == '\0')
				continue;
			printf("%c", s[i][j]);
		}

	}

	free(s);
	return 0;
}