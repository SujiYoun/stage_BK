#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�ܾ� ���� ���
�ܾ� �ִ� ���� 100.
�ܾ��� ���� ���*/
int main(void)
{
	char s[100];
	int len;

	scanf("%s", s);
	for (len = 0; s[len] != '\0'; len++);
	printf("%d", len);
	return 0;
}