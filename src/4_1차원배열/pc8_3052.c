#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*나머지
수 10개를 입력받은 뒤,
이를 42로 나눈 나머지 서로 다른 값이 몇 개 있는지 출력*/
int main(void)
{
	int reminder[42];
	int n, i;
	int count = 0;

	for (i = 0; i < 42; i++)
		reminder[i] = 0;

	for (i = 0; i < 10; i++) {
		scanf("%d", &n);
		reminder[n % 42]++;
	}
	
	for (i = 0; i < 42; i++)
		if (reminder[i] > 0)
			count++;
	printf("%d", count);
	return 0;
}