#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*진법 변환2
10진법 수 n을 b진법으로 바꿔 출력*/
void kBinary(long n, int b, char number[])
{
	if (n == 0)
		return;

	kBinary(n / b, b, number);
	printf("%c", number[n % b]);
	
	return;
}
int main(void)
{
	char number[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	long n;
	int b, i;

	scanf("%ld %d", &n, &b);

	kBinary(n, b, number);
}