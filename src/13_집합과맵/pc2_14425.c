#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*문자열 집합
총 n개의 문자열로 이루어진 집합 S
입력으로 주어지는 m개의 문자열 중에서 집합 S에 포함되어 있는 것이 총 몇 개인지 출력
집합 S에 같은 문자열이 여러 번 주어지는 경우는 없다*/
void merge(char** arr, int p, int q, int r, char** tmp)
{
	int i, j, t, k;
	i = p; j = q + 1; t = p;
	while (i <= q && j <= r) {
		k = 0;
		while (arr[i][k] == arr[j][k])
			k++;

		if (arr[i][k] <= arr[j][k])
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
void mergeSort(char** arr, int p, int r, char** tmp)
{
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(arr, p, q, tmp);
		mergeSort(arr, q + 1, r, tmp);
		merge(arr, p, q, r, tmp);
	}
	return;
}
int bSearch(char** arr, int low, int high, char* key)
{
	while (low <= high) {
		int middle = (low + high) / 2;
		if (strcmp(arr[middle], key) == 0)
			return middle;
		else if (strcmp(arr[middle], key) < 0) //st1 < st2
			low = middle + 1;
		else //st1 > st2
			high = middle - 1;
	}
	return -1;
}
int main(void)
{
	int n, m, i;
	char** S;
	char** tmp;
	char** input;
	int count = 0;

	scanf("%d %d", &n, &m);
	S = (char**)malloc(sizeof(char*) * n);
	tmp = (char**)malloc(sizeof(char*) * n);
	input = (char**)malloc(sizeof(char*) * m);
	for (i = 0; i < n; i++) {
		S[i] = (char*)malloc(sizeof(char) * 500);
		tmp[i] = (char*)malloc(sizeof(char) * 500);
		scanf("%s", S[i]);
	}

	for (i = 0; i < m; i++) {
		input[i] = (char*)malloc(sizeof(char) * 500);
		scanf("%s", input[i]);
	}

	mergeSort(S, 0, n - 1, tmp);
	for (i = 0; i < m; i++) {
		if (bSearch(S, 0, n - 1, input[i]) != -1) //찾음
			count++;
	}

	printf("%d", count);

	free(S);
	free(tmp);
	free(input);
	return 0;
}