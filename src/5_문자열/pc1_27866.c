#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���ڿ� ���ڿ�
�ܾ� S�� i��° ���� ���*/
int main(void)
{
	char S[1000];
	int i;

	scanf("%s %d", S, &i);
	printf("%c", S[i - 1]);
	return 0;
}