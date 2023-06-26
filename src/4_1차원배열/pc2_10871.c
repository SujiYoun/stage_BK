#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*X보다 작은 수
정수 n개로 이루어진 수열 A, 정수 X
A에서 X보다 작은 수를 모두 출력*/
int main(void)
{
	int arr[10000];
	int n, x, i;

	scanf("%d %d", &n, &x);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < n; i++)
		if (arr[i] < x)
			printf("%d ", arr[i]);

	return 0;
}