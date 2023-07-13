#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*단어 정렬
알파벳 소문자로 이루어진 n개의 단어
1. 길이가 짧은 것부터
2. 길이가 같으면 사전 순으로
중복된 단어는 하나만 남기고 제거*/
void merge(char** w, int p, int q, int *r, char** tmp, int type)
{
	int i, j, t, k;
	i = p; j = q + 1; t = p;
	while (i <= q && j <= r) {
		if (strcmp(w[i], w[j]) == 0) { //중복
			tmp[t++] = w[i++];
		}
		else if (type == 1) { //사전 순
			k = 0;
			while (w[i][k] == w[j][k])
				k++;

			if (w[i][k] < w[j][k])
				tmp[t++] = w[i++];
			else if (w[i][k] > w[j][k])
				tmp[t++] = w[j++];
		}
		else if (type == 2) { //type == 2 길이 순
			if (strlen(w[i]) <= strlen(w[j]))
				tmp[t++] = w[i++];
			else
				tmp[t++] = w[j++];
		}
		
	}

	while (i <= q)
		tmp[t++] = w[i++];
	while (j <= r)
		tmp[t++] = w[j++];

	for (i = p; i <= r; i++)
		w[i] = tmp[i];

	return 0;
}
void mergeSort(char** w, int p, int r, char** tmp, int type)
{
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(w, p, q, tmp, type);
		mergeSort(w, q + 1, r, tmp, type);
		merge(w, p, q, r, tmp, type);
	}
}
int removeDuplication(char** w, int size)
{
	int i, j;
	for (i = 0; i < size - 1; i++) {
		while (strcmp(w[i], w[i + 1]) == 0 && i + 1 < size) { //중복 여러 개
			for (j = i; j < size - 1; j++)
				w[j] = w[j + 1];
			size--;
		}
	}
	return size;
}
int main(void)
{
	char** word;
	char** tmp;
	int n, i, size;

	scanf("%d", &n);
	word = (char**)malloc(sizeof(char*) * n);
	tmp = (char**)malloc(sizeof(char*) * n);
	for (i = 0; i < n; i++) {
		word[i] = (char*)malloc(sizeof(char) * 51);
		tmp[i] = (char*)malloc(sizeof(char) * 51);
	}
	if (!word || !tmp)
		return 0;

	for (i = 0; i < n; i++)
		scanf("%s", word[i]);

	//사전 순으로 정렬 -> 길이 순으로 정렬
	mergeSort(word, 0, n - 1, tmp, 1); //사전 순
	mergeSort(word, 0, n - 1, tmp, 2); //길이 순

	size = removeDuplication(word, n);
	for (i = 0; i < size; i++)
		printf("%s\n", word[i]);

	free(word);
	free(tmp);
	return 0;
}