#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*90~100: A, 80~89 : B, 70~79 : C, 60~69 : D, 나머지 F*/
int main(void)
{
	int score;
	char grade;

	scanf("%d", &score);
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)//score < 90
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'F';
	
	printf("%c", grade);
	return 0;
}
