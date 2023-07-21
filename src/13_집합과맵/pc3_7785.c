#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*ȸ�翡 �ִ� ���
���� ��� n��
����� �̸� "enter": ���, "leave" : ���
���� ȸ�翡 �ִ� ����� �̸��� ���� ���� �������� �� �ٿ� �� �� ���*/
void merge(char** list, int p, int q, int r, char** tmp)
{
	int i, j, t, k;
	i = p; j = q + 1; t = p;
	while (i <= q && j <= r) {
		k = 0;
		while (list[i][k] == list[j][k])
			k++;

		if (list[i][k] >= list[j][k]) //���� ���� ����
			strcpy(tmp[t++], list[i++]);
		else
			strcpy(tmp[t++], list[j++]);
	}
	while (i <= q)
		strcpy(tmp[t++], list[i++]);
	while (j <= r)
		strcpy(tmp[t++], list[j++]);

	for (i = p; i <= r; i++)
		strcpy(list[i], tmp[i]);
	return;
}
void mergeSort(char** list, int p, int r, char** tmp)
{
	if (p < r) {
		int q = (p + r) / 2;
		mergeSort(list, p, q, tmp);
		mergeSort(list, q + 1, r, tmp);
		merge(list, p, q, r, tmp);
	}
	return;
}
int bSearch(char** list, int low, int high, char* key)
{
	while (low <= high) {
		int middle = (low + high) / 2;
		if (strcmp(list[middle], key) == 0)
			return middle;
		else if (strcmp(list[middle], key) < 0) //st1 < st2
			low = middle + 1;
		else //st1 > st2
			high = middle - 1;
	}
	return -1;
}
int leaveMember(char** list, int size, char* name)
{
	int i;
	int idx = bSearch(list, 0, size - 1, name);
	for (i = idx; i < size - 1; i++)
		strcpy(list[i], list[i + 1]);
	strcpy(list[i], "");
	return size - 1;
}
int main(void)
{
	char** list;
	char** tmp;
	char name[6];
	char log[6];
	int n, i;
	int count = 0;

	scanf("%d", &n);
	list = (char**)malloc(sizeof(char*) * n);
	for (i = 0; i < n; i++) {
		list[i] = (char*)malloc(sizeof(char) * 6);
	}
	if (!list) //���� ������ �߻���
		return 0;

	for (i = 0; i < n; i++) {
		scanf("%s %s", name, log);
		if (strcmp (log, "enter") == 0) { //������ ���
			strcpy(list[count], name); //���ڿ��� 0���� ������� ���� �� �ֽ��ϴ�. => ��üũ. ���ڿ� ���� '\0'�� �ִ���
			count++;
		}
		else { //"leave"
			count = leaveMember(list,count, name);
		}
	}

	//����
	tmp = (char**)malloc(sizeof(char*) * count);
	for (i = 0; i < count; i++)
		tmp[i] = (char*)malloc(sizeof(char) * 6);
	if (!tmp)
		return 0;
	mergeSort(list, 0, count - 1, tmp);

	//���
	for (i = 0; i < count; i++) {
		printf("%s\n", list[i]);
	}

	for (i = 0; i < n; i++) {
		free(list[i]);
	}
	for (i = 0; i < count; i++)
		free(tmp[i]);
	free(list);
	free(tmp);
	return 0;
}