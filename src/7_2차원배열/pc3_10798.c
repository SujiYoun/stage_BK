#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*�����б�
* 1~15���� ���ڵ��� ��ĭ ���� �־�����.
* A~Z, a~z, 0~9
* ���η� ���� ������� ���ڸ� ������� ���
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