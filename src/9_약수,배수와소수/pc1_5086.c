#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*����� ���
* 1. ù ��° ���ڰ� �� ��° ������ ����̴�. factor
* 2. ù ��° ���ڰ� �� ��° ������ ����̴�. multiple
* 3. ù ��° ���ڰ� �� ��° ������ ����� ��� ��� �ƴϴ�. neither

0 0 �Է½� ����*/
int main(void)
{
	int a, b;
	int fac, mul;

	scanf("%d %d", &a, &b);

	while (a != 0 && b != 0) {
		fac = 0;
		mul = 0;
		//a�� b�� ���
		if (b % a == 0)
			fac = 1;

		//a�� b�� ���
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