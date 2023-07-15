#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*좌표 압축*/
struct Coordinate {
	int x;
	int newX;
	int idx;
};
void merge(struct Coordinate* arr, int p, int q, int r, struct Coordinate* tmp, int type)
{
	int i, j, t;
	i = p; j = q + 1; t = p;
	while (i <= q && j <= r) {
		if (type == 1) { //x 오름차순
			if (arr[i].x <= arr[j].x)
				tmp[t++] = arr[i++];
			else
				tmp[t++] = arr[j++];
		}
		else { //type == 2 순서 되돌리기
			if (arr[i].idx <= arr[j].idx)
				tmp[t++] = arr[i++];
			else
				tmp[t++] = arr[j++];
		}
	}
	while (i <= q)
		tmp[t++] = arr[i++];
	while (j <= r)
		tmp[t++] = arr[j++];

	for (i = p; i <= r; i++)
		arr[i] = tmp[i];
	return;
}
void mergeSort(struct Coordinate* arr, int p, int r, struct Coordinate* tmp, int type)
{
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(arr, p, q, tmp, type);
		mergeSort(arr, q + 1, r, tmp, type);
		merge(arr, p, q, r, tmp, type);
	}
	return;
}
int main(void)
{
	struct Coordinate* arr;
	struct Coordinate* tmp;
	int n, i, j;

	scanf("%d", &n);
	arr = (struct Coordinate*)malloc(sizeof(struct Coordinate) * n);
	tmp = (struct Coordinate*)malloc(sizeof(struct Coordinate) * n);
	if (!arr || !tmp)
		return 0;

	for (i = 0; i < n; i++) {
		arr[i].idx = i;
		scanf("%d", &arr[i].x);
	}

	mergeSort(arr, 0, n - 1, tmp, 1);
	j = 0;
	for (i = 0; i < n; i++) {
		if (arr[i].x > arr[i - 1].x && i >= 1)
			j++;
		arr[i].newX = j;
	}

	mergeSort(arr, 0, n - 1, tmp, 2);

	for (i = 0; i < n; i++)
		printf("%d ", arr[i].newX);
	
	free(arr);
	free(tmp);
	return 0;
}