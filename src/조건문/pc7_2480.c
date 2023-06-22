#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*주사위 세 개
1. 같은 눈 3개: 10,000원 + (같은 눈) * 1,000
2. 같은 눈 2개: 1,000 + (같은 눈) * 100
3. 모두 다른 눈: (그중 가장 큰 눈) * 100*/
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

	if (count == 3) //같은 눈 3개
		prize = 10000 + pip * 1000;
	else if (count == 2) //같은 눈 2개
		prize = 1000 + pip * 100;
	else { //모두 다른 눈
		pip = dice[0];
		for (i = 1; i < 3; i++)
			if (dice[i] > pip)
				pip = dice[i];

		prize = pip * 100;
	}
	printf("%d", prize);
	return 0;
}