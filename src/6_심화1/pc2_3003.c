#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*ŷ, ��, ��, ���, ����Ʈ, ��
ü��: 16�� (ŷ1, ��1, ��2, ���2, ����Ʈ2, ��8
�Է¿��� �־��� ������� �� ���� �ǽ��� ���ϰų� ���� �Ǵ� �� ���
������ �� ������ŭ ���ؾ�, ������� �����ؾ�*/
int main(void)
{
	int piece[6] = {1, 1, 2, 2, 2, 8};
	int dongHyuk[6];
	int i;

	for (i = 0; i < 6; i++)
		scanf("%d", &dongHyuk[i]);

	for (i = 0; i < 6; i++)
		printf("%d ", piece[i] - dongHyuk[i]);

	return 0;
}