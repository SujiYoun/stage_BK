#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*좌표 정렬하기
2차원 평면 위의 점 n개.
좌표를 x좌표가 증가하는 순으로, x좌표가 같으면 y좌표가 증가하는 순서로 정렬*/
struct Dot {
	int x;
	int y;
};
void input(struct Dot* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		scanf("%d %d", &arr[i].x, &arr[i].y);
	return;
}
void display(struct Dot* arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
	return;
}
void merge(struct Dot* arr, int p, int q, int r, struct Dot* tmp , int type)
{
	int i, j, t;
	i = p; j = q + 1; t = p;
	while (i <= q && j <= r) {
		if (type == 1) {
			if (arr[i].y <= arr[j].y)
				tmp[t++] = arr[i++];
			else
				tmp[t++] = arr[j++];
		}
		else { //type == 2
			if (arr[i].x <= arr[j].x)
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

void mergeSort(struct Dot* arr, int p, int r, struct Dot* tmp, int type)
{
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(arr, p, q, tmp, type);
		mergeSort(arr, q + 1, r, tmp, type);
		merge(arr, p, q, r, tmp, type);
	}
}
int main(void)
{
	struct Dot* dList;
	struct Dot* tmp;
	int n;

	scanf("%d", &n);
	dList = (struct Dot*)malloc(sizeof(struct Dot) * n);
	tmp = (struct Dot*)malloc(sizeof(struct Dot) * n);
	if (!dList || !tmp)
		return 0;
	input(dList, n);

	mergeSort(dList, 0, n - 1, tmp, 1); //y좌표 정렬
	mergeSort(dList, 0, n - 1, tmp, 2); //x좌표 정렬
	display(dList, n);
	
	free(dList);
	free(tmp);
	return 0;
}