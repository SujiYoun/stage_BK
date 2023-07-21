#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*나는야 포켓몬 마스터 이다솜
도감에 수록되어 있는 포켓몬 n개, 내가 맞춰야 하는 문제 m개
포켓몬 이름의 최대 길이 20
알파벳 문제 = 포켓몬 번호
숫자 문제(>= 1, <= n) = 포켓몬 이름*/
typedef struct {
	int idx;
	char name[21];
}pocketmon;
void merge(pocketmon* list, int p, int q, int r, pocketmon* tmp, int type)
{
	int i, j, t, k;
	i = p; j = q + 1; t = p;
	while (i <= q && j <= r) {
		if (type == 1) { //이름 순
			k = 0;
			while (list[i].name[k] == list[j].name[k])
				k++;

			if (list[i].name[k] <= list[j].name[k])
				tmp[t++] = list[i++];
			else
				tmp[t++] = list[j++];
		}
		else { //type == 2 인덱스 순
			if (list[i].idx <= list[j].idx)
				tmp[t++] = list[i++];
			else
				tmp[t++] = list[j++];
		}
	}
	while (i <= q)
		tmp[t++] = list[i++];
	while (j <= r)
		tmp[t++] = list[j++];

	for (i = p; i <= r; i++)
		list[i] = tmp[i];

	return;
}
void mergeSort(pocketmon* list, int p, int r, pocketmon* tmp, int type)
{
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(list, p, q, tmp, type);
		mergeSort(list, q + 1, r, tmp, type);
		merge(list, p, q, r, tmp, type);
	}
	return;
}
int bSearch(pocketmon* list, int low, int high, char* key)
{
	while (low <= high) {
		int middle = (low + high) / 2;
		if (strcmp(list[middle].name, key) == 0)
			return middle;
		else if (strcmp(list[middle].name, key) < 0) //st1 < st2
			low = middle + 1;
		else //st1 > st2
			high = middle - 1;
	}
	return -1;
}
int main(void)
{
	pocketmon* list;
	pocketmon* tmp;
	int n, m, i, idx, found;
	char quest[21];

	scanf("%d %d", &n, &m);
	list = (pocketmon*)malloc(sizeof(pocketmon) * n);
	tmp = (pocketmon*)malloc(sizeof(pocketmon) * n);
	for (i = 0; i < n; i++) {
		list[i].idx = i + 1;
		scanf("%s", list[i].name);
	}

	for (i = 0; i < m; i++) {
		scanf("%s", quest);
		if (quest[0] >= '0' && quest[0] <= '9') { //숫자
			idx = atoi(quest);
			printf("%s\n", list[idx - 1].name);
		}
		else {
			mergeSort(list, 0, n - 1, tmp, 1); //이름 순
			found = bSearch(list, 0, n - 1, quest);
			printf("%d\n", list[found].idx);

			mergeSort(list, 0, n - 1, tmp, 2); //원래대로. 인덱스 순
		}
	}

	free(list);
	free(tmp);
	return 0;
}