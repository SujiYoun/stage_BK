#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�丮�� �����ϴ� �ð�, �丮�� �ϴ� �� �ʿ��� �ð��� �д����� �־���
�丮�� ������ �ð� ���*/
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