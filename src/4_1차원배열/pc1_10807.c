#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���� ����
ù° �ٿ� ������ ���� n.
ã������ ���� v
�Է����� �־��� n���� ���� �� v�� �� ������ ���*/
int main(void)
{
	int arr[100];
	int n, v, i;
	int count = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &v);
	for (i = 0; i < n; i++)
		if (arr[i] == v)
			count++;
	printf("%d", count);
	return 0;
}