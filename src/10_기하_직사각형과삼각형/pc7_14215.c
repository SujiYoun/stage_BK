#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�� ����
�� ������ ���̸� ������� ���� �� �ִ�
���� �� �ִ� ���� ū �ﰢ���� �ѷ��� ���
���� �� ���� ���̴� �ٸ� �� ���� �պ��� �۾ƾ� �Ѵ�*/
int main(void)
{
	int side[3];
	int i, tmp;

	for (i = 0; i < 3; i++)
		scanf("%d", &side[i]);

	//side[2]�� ���� �� ��
	for (i = 0; i < 3; i++)
		if (side[i] > side[2]) {
			tmp = side[i];
			side[i] = side[2];
			side[2] = tmp;
		}

	while (side[2] >= side[0] + side[1]) {
		side[2]--;
	}

	printf("%d", side[0] + side[1] + side[2]);
	return 0;
}