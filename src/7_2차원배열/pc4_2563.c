#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*������
����100����100 ��� ��ȭ��
����10����10 ���� �����̸� ��ȭ���� ���δ�
���� ������ ����

������ n��
���� ������ ���� ��ǥ �Է�*/
int main(void)
{
	int paper[100][100] = {0};
	int n, x, y, i, j, k;
	int area, count = 0;

	scanf("%d", &n);
	area = n * 10 * 10;
	for (i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		for (j = x; j < x + 10; j++) {
			for (k = y; k < y + 10; k++) {
				if (paper[j][k] == 1)
					count++;
				else
					paper[j][k] = 1;
			}
		}
	}
	
	printf("%d", area - count);

	return 0;
}