#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���簢������ Ż��
(x, y)���� ���簢���� ��輱���� ���� �Ÿ��� �ּڰ�
���簢���� �� ���� ��ǥ�࿡ �����ϰ�,
���� �Ʒ� �������� (0, 0), ������ �� �������� (w, h)�� �ִ�.
1 �� w, h �� 1,000
1 �� x �� w-1
1 �� y �� h-1*/
int main(void)
{
	int x, y, w, h;
	int distance;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	//�� : x
	//�� : w - x
	//�� : h - y
	//�Ʒ� : y

	distance = x;
	if (w - x < distance)
		distance = w - x;
	if (y < distance)
		distance = y;
	if (h - y < distance)
		distance = h - y;

	printf("%d", distance);
	return 0;
}