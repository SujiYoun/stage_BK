#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*��
1 <= n <= 10000
1���� n���� �� ���*/
int main(void)
{
	int n, i;
	int total = 0;
	
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		total += i;

	printf("%d", total);
	return 0;
}