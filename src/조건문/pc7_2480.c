#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�ֻ��� �� ��
1. ���� �� 3��: 10,000�� + (���� ��) * 1,000
2. ���� �� 2��: 1,000 + (���� ��) * 100
3. ��� �ٸ� ��: (���� ���� ū ��) * 100*/
int main(void)
{
	int dice[3];
	int i, pip, prize;
	int count = 1;

	for (i = 0; i < 3; i++) {
		scanf("%d", &dice[i]);
	}

	pip = dice[0];
	for (i = 1; i < 3; i++)
		if (dice[i] == pip)
			count++;

	if (count == 1) {
		pip = dice[1];
		if (dice[2] == pip)
			count++;
	}

	if (count == 3) //���� �� 3��
		prize = 10000 + pip * 1000;
	else if (count == 2) //���� �� 2��
		prize = 1000 + pip * 100;
	else { //��� �ٸ� ��
		pip = dice[0];
		for (i = 1; i < 3; i++)
			if (dice[i] > pip)
				pip = dice[i];

		prize = pip * 100;
	}
	printf("%d", prize);
	return 0;
}