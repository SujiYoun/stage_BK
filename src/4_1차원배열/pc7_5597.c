#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*과제 안 내신 분...?
학생 30명, 제출 안 한 학생 2명의 출석번호 구하기
제출자 출석번호 주어짐
제출하지 않은 학생의 출석번호 작은 것부터 출력*/
int main(void)
{
	int submit[31];
	int i, num;

	for (i = 0; i < 31; i++)
		submit[i] = 0;

	for (i = 0; i < 28; i++) {
		scanf("%d", &num);
		submit[num] = 1;
	}
	
	for (i = 1; i <= 30; i++)
		if (submit[i] == 0)
			printf("%d\n", i);

	return 0;
}