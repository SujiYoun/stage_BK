#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*������ ��
���� n���� ���� ���*/
int main(void)
{
	char number[100];
	int n, i, sum = 0;
	
	scanf("%d %s", &n, number);
	for (i = 0; i < n; i++)
		sum += number[i] - '0';

	printf("%d", sum);
	return 0;
}