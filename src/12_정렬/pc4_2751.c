#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*수 정렬하기 2*/
void merge(int* arr, int p, int q, int r, int* tmp)
{
	int i, j, t;
	i = p; j = q + 1; t = p;
	while (i <= q && j <= r) {
		if (arr[i] < arr[j])
			tmp[t++] = arr[i++];
		else
			tmp[t++] = arr[j++];
	}
	while (i <= q)
		tmp[t++] = arr[i++];
	while (j <= r)
		tmp[t++] = arr[j++];

	for (i = p; i <= r; i++)
		arr[i] = tmp[i];
	return;
}
void mergeSort(int* arr, int p, int r, int* tmp)
{
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(arr, p, q, tmp);
		mergeSort(arr, q + 1, r, tmp);
		merge(arr, p, q, r, tmp);
	}
	return;
}
int main(void)
{
	int* arr;
	int* tmp;
	int n, i;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	tmp = (int*)malloc(sizeof(int) * n);
	if (!arr || !tmp)
		return 0;

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	mergeSort(arr, 0, n - 1, tmp);

	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	free(arr);
	free(tmp);
	return 0;
}