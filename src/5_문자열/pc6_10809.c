#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���ĺ� ã��
�ܾ� S
������ ���ĺ��� ����, �ܾ ���ԵǾ� �ִ� ��� ó�� �����ϴ� ��ġ.
���ԵǾ� ���� ���� ��쿡�� -1 ���*/
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