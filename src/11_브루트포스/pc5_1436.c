#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*��ȭ������
������ ��: 666 1666 2666 3666 4666 5666 6660 6661
n��° ������ ��

� ���� 6�� ��� 3�� �̻� �������� ���� ��
666�����̸�*/
int main(void)
{
	int n, i, count = 0;
	int num = 0, tmp;

	scanf("%d", &n);

	while (count < n) {
		num++;
		tmp = num;
		while (tmp > 0) {
			if (tmp % 1000 == 666) {
				count++;
				break;
			}
			tmp /= 10;
		}
	}
	printf("%d", num);
	return 0;
}