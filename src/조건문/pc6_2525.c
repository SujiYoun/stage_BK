#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*요리를 시작하는 시각, 요리를 하는 데 필요한 시간이 분단위로 주어짐
요리가 끝나는 시각 계산*/
int main(void)
{
	int H, M, reminder;
	int leadTime;

	scanf("%d %d", &H, &M);
	scanf("%d", &leadTime);

	reminder = M + leadTime;
	if (reminder >= 60) {
		printf("%d %d", (H + (reminder / 60)) % 24, reminder % 60);
	}
	else
		printf("%d %d", H, reminder);

	return 0;
}