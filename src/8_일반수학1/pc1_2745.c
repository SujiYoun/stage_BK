#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*���� ��ȯ
B���� �� N�� 10�������� �ٲپ� ���

�Է� : N B
B���� �� N�� 10�������� �ٲٸ�, �׻� 10�ﺸ�� �۰ų� ����.
*/
int main(void)
{
	char n[81]; //�󸶳� Ŀ���� �� �𸣰���
	int b, i;
	int rslt = 0, reminder;

	scanf("%s %d", n, &b);

	reminder = 1;
	for (i = (int)strlen(n) - 1; i >= 0; i--) {
		if (n[i] >= 'A' && n[i] <= 'Z')
			rslt += (n[i] - 'A' + 10) * reminder;
		else
			rslt += (n[i] - '0') * reminder;
		reminder *= b;
	}

	printf("%d", rslt);

	return 0;
}