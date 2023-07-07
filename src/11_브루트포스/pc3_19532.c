#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*������ ���鰭���Դϴ�
�����̰� ���߾� ģ������ ������ ���߾� ����� ���� �� �ְ� ��������.
ax + by = c
dx + ey = f

a, b, c, d, e, f �Է�
����� �������� �����ϰ� �����ϴ� x, y ���*/
int check(int a, int b, int c, int d, int e, int f, int x, int y)
{
	if (a * x + b * y != c)
		return 0;
	if (d * x + e * y != f)
		return 0;
	return 1;
}

int main(void)
{
	int a, b, c, d, e, f;
	int x, y;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	for (x = -999; x <= 999; x++) {
		for (y = -999; y <= 999; y++)
			if (check(a, b, c, d, e, f, x, y) == 1)
				printf("%d %d", x, y);
	}
	
	return 0;
}