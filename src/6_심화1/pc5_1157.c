#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�ܾ� ����
�ܾ�� ���� ���� ���� ���ĺ��� �������� ���(�빮�ڷ�)
���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ? ���*/
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