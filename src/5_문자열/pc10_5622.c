#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���̾�
���� 1�� �ɷ��� 2��. �� ĭ ���� �ִ� ���ڸ� �ɱ� ���ؼ� 1�ʾ� ��
�� ���ڿ� �ش��ϴ� ���ڷ� ���ڸ� �ܿ�*/
int main(void)
{
	char s[17];
	int i, sec = 0;

	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] - 'A' >= 0) //ABC
			sec += 3;
		if (s[i] - 'A' > 2) //DEF
			sec++;
		if (s[i] - 'A' > 5) //GHI
			sec++;
		if (s[i] - 'A' > 8) //JKL
			sec++;
		if (s[i] - 'A' > 11) //MNO
			sec++;
		if (s[i] - 'A' > 14) //PQRS
			sec++;
		if (s[i] - 'A' > 18) //TUV
			sec++;
		if (s[i] - 'A' > 21) //WXYZ
			sec++;
	}

	printf("%d", sec);

	return 0;
}
