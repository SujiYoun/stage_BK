#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�־��� ������ �����̸� 1, �ƴϸ� 0
���� : 4�� ����̸鼭, 100�� ����� �ƴ� ��, �Ǵ� 400�� ����� ��*/
int main(void)
{
	int isLeap = 0;
	int year;

	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0)
		isLeap = 1;
	else if (year % 400 == 0)
		isLeap = 1;

	printf("%d", isLeap);
	return 0;
}