#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*�ܾ��� ����
�ܾ��� ���� ���*/
int main(void)
{
	char str[1000002];
	int i, count = 0; //���� �ϳ� �Է½� 0 ���.

	fgets(str, sizeof(str), stdin); //���鹮�� ���� �Է�. �ð��ʰ�
	if (strlen(str) > 2 || str[0] != ' ') //�ܾ� �ϳ� �Է½�
		count = 1;

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ' ' && str[i + 1] != ' ' && i != 0 && i != strlen(str) - 2) //'\n'
			count++;
	}

	printf("%d", count);
	return 0;
}