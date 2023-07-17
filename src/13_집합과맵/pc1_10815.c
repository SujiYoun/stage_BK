#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*���� ī��
���� ī�� n��.
���� m��. �� ���� �����ִ� ���� ī�尡 �ִ��� �ƴ���*/
struct KeyCard {
	int num;
	int found;
};
void merge(int* arr, int p, int q, int r, int* tmp)
{
	int i, j, t;
	i = p; j = q + 1; t = p;
	while (i <= q && j <= r) {
		if (arr[i] <= arr[j])
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
int bSearch(int* arr, int low, int high, int key)
{
	while (low <= high) {
		int middle = (low + high) / 2;
		if (arr[middle] == key)
			return 1; //ã��. ������ middle return
		else if (arr[middle] > key)
			high = middle - 1;
		else
			low = middle + 1;
	}
	return 0; //ã�� ����
}
int main(void)
{
	int n, m, i;
	int* card;
	int* tmp;
	struct KeyCard* inputCard;

	scanf("%d", &n);
	card = (int*)malloc(sizeof(int) * n);
	tmp = (int*)malloc(sizeof(int) * n);
	if (!card || !tmp)
		return 0;
	for (i = 0; i < n; i++)
		scanf("%d", &card[i]);

	scanf("%d", &m);
	inputCard = (struct KeyCard*)malloc(sizeof(struct KeyCard) * m);
	if (!inputCard)
		return 0;
	for (i = 0; i < m; i++) {
		scanf("%d", &inputCard[i].num);
	}

	//card ����
	mergeSort(card, 0, n - 1, tmp);
	//ã��
	for (i = 0; i < m; i++) {
		inputCard[i].found = bSearch(card, 0, n - 1, inputCard[i].num);
	}

	for (i = 0; i < m; i++)
		printf("%d ", inputCard[i].found);

	free(card);
	free(tmp);
	free(inputCard);
	return 0;
}