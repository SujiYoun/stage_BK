#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*단어 공부
단어에서 가장 많이 사용된 알파벳이 무엇인지 출력(대문자로)
가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ? 출력*/
int main(void)
{
	char s[1000000];
	int alphaCnt[26] = {0,};
	int i, max, maxIdx;


	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			alphaCnt[s[i] - 'A']++;
		else if (s[i] >= 'a' && s[i] <= 'z')
			alphaCnt[s[i] - 'a']++;

	}

	maxIdx = 0;
	max = alphaCnt[0];
	for (i = 0; i < 26; i++) {
		if (alphaCnt[i] > max) {
			maxIdx = i;
			max = alphaCnt[i];
		}
	}

	for (i = 0; i < 26; i++)
		if (alphaCnt[i] == max && i != maxIdx) {
			printf("?");
			return 0;
		}
	printf("%c", 'A' + maxIdx);

	return 0;
}