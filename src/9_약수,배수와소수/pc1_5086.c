#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*배수와 약수
* 1. 첫 번째 숫자가 두 번째 숫자의 약수이다. factor
* 2. 첫 번째 숫자가 두 번째 숫자의 배수이다. multiple
* 3. 첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다. neither

0 0 입력시 종료*/
int main(void)
{
	int a, b;
	int fac, mul;

	scanf("%d %d", &a, &b);

	while (a != 0 && b != 0) {
		fac = 0;
		mul = 0;
		//a가 b의 약수
		if (b % a == 0)
			fac = 1;

		//a가 b의 배수
		if (a % b == 0)
			mul = 1;

		if (fac == 1)
			printf("factor\n");
		else if (mul == 1)
			printf("multiple\n");
		else
			printf("neither\n");

		scanf("%d %d", &a, &b);
	}
	return 0;
}