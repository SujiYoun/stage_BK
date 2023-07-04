#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*세 막대
각 막대의 길이를 마음대로 줄일 수 있다
만들 수 있는 가장 큰 삼각형의 둘레를 출력
가장 긴 변의 길이는 다른 두 변의 합보다 작아야 한다*/
int main(void)
{
	int side[3];
	int i, tmp;

	for (i = 0; i < 3; i++)
		scanf("%d", &side[i]);

	//side[2]가 가장 긴 변
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