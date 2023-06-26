#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*숫자의 합
숫자 n개의 합을 출력*/
int main(void)
{
	char number[100];
	int n, i, sum = 0;
	
	scanf("%d %s", &n, number);
	for (i = 0; i < n; i++)
		sum += number[i] - '0';

	printf("%d", sum);
	return 0;
}