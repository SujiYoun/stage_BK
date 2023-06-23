#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*주어진 연도가 윤년이면 1, 아니면 0
윤년 : 4의 배수이면서, 100의 배수가 아닐 때, 또는 400의 배수일 때*/
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