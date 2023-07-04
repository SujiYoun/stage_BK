#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*�ﰢ�� �ܿ��
* �ﰢ���� ���� ũ�Ⱑ �־���
�� ���� ũ�Ⱑ ��� 60�̸�, Equilateral
�� ���� ���� 180�̰�, �� ���� ���� ��쿡�� Isosceles
�� ���� ���� 180�̰�, ���� ���� ���� ��쿡�� Scalene
�� ���� ���� 180�� �ƴ� ��쿡�� Error*/
int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a + b + c != 180) {
		printf("Error");
		return 0;
	}

	else if (a == 60 && b == 60)
		printf("Equilateral");
	else if (a == b || b == c || c == a)
		printf("Isosceles");
	else
		printf("Scalene");

	return 0;
}