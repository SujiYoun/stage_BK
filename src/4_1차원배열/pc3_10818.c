#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*�ּ�, �ִ�
N���� ������ �־����� �ּڰ��� �ִ��� ���ض�*/
int main(void)
{
	int *arr;
	int n, i, max, min;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	if (!arr) return 0;

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	max = arr[0];
	min = arr[0];
	for (i = 1; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	printf("%d %d", min, max);
	
	free(arr);
	return 0;
}