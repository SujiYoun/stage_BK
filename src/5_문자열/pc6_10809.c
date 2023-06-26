#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*알파벳 찾기
단어 S
각각의 알파벳에 대해, 단어에 포함되어 있는 경우 처음 등장하는 위치.
포함되어 있지 않은 경우에는 -1 출력*/
int main(void)
{
	char word[100];
	int alphaCnt[26];
	int i;

	scanf("%s", word);

	for (i = 0; i < 26; i++)
		alphaCnt[i] = -1;

	for (i = 0; word[i] != '\0'; i++) {
		if (alphaCnt[word[i] - 'a'] == -1)
			alphaCnt[word[i] - 'a'] = i;
	}

	for (i = 0; i < 26; i++)
		printf("%d ", alphaCnt[i]);

	return 0;
}