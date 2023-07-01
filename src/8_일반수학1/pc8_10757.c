#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*큰 수 A + B
0 < A, B < 10의 10000승

unsigned long long로 출력 가능하나 더 큰 수
unsigned long long : 8Byte. 0 ~ 18,446,744,073,709,551,615 
*/
void reverse(char s[])
{
	int i;
	char tmp;
	for (i = 0; i < strlen(s) / 2; i++) {
		tmp = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = tmp;
	}
	return;
}
int main(void)
{
	char A[10002], B[10002];
	char rslt[10003];
	int i, carry = 0;
	int reminder;

	scanf("%s %s", A, B);

	reverse(A);
	reverse(B);

	i = 0;
	while (A[i] != '\0' && B[i] != '\0') {
		reminder = A[i] + B[i] + carry - '0' - '0';
		rslt[i++] = reminder % 10 + '0';

		carry = (reminder > 9) ? 1 : 0;
	}

	while (i < strlen(A)) {
		reminder = A[i] + carry - '0';
		rslt[i++] = reminder % 10 + '0';

		carry = (reminder > 9) ? 1 : 0;
	}

	while (i < strlen(B)) {
		reminder = B[i] + carry - '0';
		rslt[i++] = reminder % 10 + '0';

		carry = (reminder > 9) ? 1 : 0;
	}

	if (carry == 1)
		rslt[i++] = '1';
	rslt[i] = '\0';

	reverse(rslt);

	printf("%s", rslt);
	return 0;
}