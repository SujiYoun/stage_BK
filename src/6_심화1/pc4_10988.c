#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*�Ӹ�������� Ȯ���ϱ�
������ == �Ųٷ�
�Ҹ�����̸� 1, �ƴϸ� 0*/
int is_palindrome(char* s)
{
	int i;
	for (i = 0; i < strlen(s) / 2; i++)
		if (s[i] != s[strlen(s) - i - 1])
			return 0;
	return 1;
}

int main(void)
{
	char s[102];
	int i;

	scanf("%s", s);
	printf("%d", is_palindrome(s));

	return 0;
}