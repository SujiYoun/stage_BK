#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���� �� ���� ��...?
�л� 30��, ���� �� �� �л� 2���� �⼮��ȣ ���ϱ�
������ �⼮��ȣ �־���
�������� ���� �л��� �⼮��ȣ ���� �ͺ��� ���*/
int main(void)
{
	int submit[31];
	int i, num;

	for (i = 0; i < 31; i++)
		submit[i] = 0;

	for (i = 0; i < 28; i++) {
		scanf("%d", &num);
		submit[num] = 1;
	}
	
	for (i = 1; i <= 30; i++)
		if (submit[i] == 0)
			printf("%d\n", i);

	return 0;
}