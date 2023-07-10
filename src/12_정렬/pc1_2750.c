#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*수 정렬하기
n개의 수를 오름차순으로 정렬*/
void bubbleSort(int* arr, int size)
{
	int i, j, tmp;
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
	}

}
int main(void)
{
	int* arr;
	int n, i;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	if (!arr)
		return 0;

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	bubbleSort(arr, n);

	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	free(arr);
	return 0;
}