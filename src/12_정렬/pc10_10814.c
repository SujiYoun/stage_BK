#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*나이순 정렬
나이와 이름이 가입한 순서대로 주어짐
나이가 증가하는 순으로, 나이가 같으면 먼저 가입한 사람이 앞에 오는 순서로 정렬*/
struct Member {
	int age;
	char name[101];
};
void merge(struct Member* arr, int p, int q, int r, struct Member* tmp)
{
	int i, j, t;
	i = p; j = q + 1; t = p;
	while (i <= q && j <= r) {
		if (arr[i].age <= arr[j].age)
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
void mergeSortByAge(struct Member* arr, int p, int r, struct Member* tmp)
{
	if (p < r) {
		int q = (p + r) / 2;
		mergeSortByAge(arr, p, q, tmp);
		mergeSortByAge(arr, q + 1, r, tmp);
		merge(arr, p, q, r, tmp);
	}
	return;
}
int main(void)
{
	struct Member* mList;
	struct Member* tmp;
	int n, i;

	scanf("%d", &n);
	mList = (struct Member*)malloc(sizeof(struct Member) * n);
	tmp = (struct Member*)malloc(sizeof(struct Member) * n);
	if (!mList || !tmp)
		return 0;

	for (i = 0; i < n; i++)
		scanf("%d %s", &mList[i].age, mList[i].name);

	mergeSortByAge(mList, 0, n - 1, tmp);

	for (i = 0; i < n; i++)
		printf("%d %s\n", mList[i].age, mList[i].name);

	free(mList);
	free(tmp);
	return 0;
}