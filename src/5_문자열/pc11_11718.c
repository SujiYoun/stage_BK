#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�״�� ����ϱ�
�Է� ���� ��� ���
�Է� �ִ� 100��*/
int main(void)
{
	char str[100];

	while (fgets(str, sizeof(str), stdin) != NULL) { //NULL: ������ ��
		fputs(str, stdout);
	}

	return 0;
}