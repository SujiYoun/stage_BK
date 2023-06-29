#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*진법 변환
B진법 수 N을 10진법으로 바꾸어 출력

입력 : N B
B진법 수 N을 10진법으로 바꾸면, 항상 10억보다 작거나 같다.
*/
int main(void)
{
	char n[81]; //얼마나 커야할 지 모르겠음
	int b, i;
	int rslt = 0, reminder;

	scanf("%s %d", n, &b);

	reminder = 1;
	for (i = (int)strlen(n) - 1; i >= 0; i--) {
		if (n[i] >= 'A' && n[i] <= 'Z')
			rslt += (n[i] - 'A' + 10) * reminder;
		else
			rslt += (n[i] - '0') * reminder;
		reminder *= b;
	}

	printf("%d", rslt);

	return 0;
}