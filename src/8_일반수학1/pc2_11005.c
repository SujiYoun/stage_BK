#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���� ��ȯ2
10���� �� n�� b�������� �ٲ� ���*/
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