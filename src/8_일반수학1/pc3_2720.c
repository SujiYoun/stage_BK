#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*��Ź�� ���� ����
�Ž����� ��� (�޷�)
�׽�Ʈ T ��, �Ž����� C (��Ʈ) (1$ == 100��Ʈ)
�ּ� ����(0.25$) ����, ����(0.10$) ����, ����(0.05$) ����, ���(0.01$)���� ���
1���� == 25��Ʈ, 1���� == 10��Ʈ, 1���� == 5��Ʈ, 1��� == 1��Ʈ
*/
int main(void)
{
	int T, C, i;
	int quarter, dime, nickel, penny;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &C);

		quarter = C / 25;
		C -= quarter * 25;
		dime = C / 10;
		C -= dime * 10;
		nickel = C / 5;
		C -= nickel * 5;
		penny = C / 1;

		printf("%d %d %d %d\n", quarter, dime, nickel, penny);
	}

	return 0;
}