#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�߾� �̵� �˰���
1. ���簢���� �� ���� �߾ӿ� ���� �ϳ� �߰�.
2. ���簢���� �߽ɿ� ���� �ϳ� �߰�.

��ġ�� �κ��� ����
�ʱ�: �� 4
1: 9 = �� 4 + �߾� 1
2: 25 = 9 + �� 12(�簢�� * �簢�� �� ���� - ��ġ�� �κ�) + �߾� 4
3: 56 = 25 + �� 

�� : (r + c) * 2
�� ���� : r * (c - 1)
�� ���� : c *(r - 1)
�� �߾� : r * c*/
int main(void)
{
	int n;
	int dots = 4, square, side, i;
	int r = 1, c = 1;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		side = (r + c) * 2 + r * (c - 1) + c * (r - 1);
		square = r * c;
		dots += side + square;

		r *= 2; c *= 2;
	}

	printf("%d", dots);

	return 0;
}