#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���ڿ�
* �׽�Ʈ ���̽� T��
���ڿ��� ù ���ڿ� ������ ���� ���
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