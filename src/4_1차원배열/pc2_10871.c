#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*X���� ���� ��
���� n���� �̷���� ���� A, ���� X
A���� X���� ���� ���� ��� ���*/
int main(void)
{
	int arr[10000];
	int n, x, i;

	scanf("%d %d", &n, &x);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < n; i++)
		if (arr[i] < x)
			printf("%d ", arr[i]);

	return 0;
}