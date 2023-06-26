#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*최댓값
9개의 서로 다른 자연수 중 최댓값을 출력하고, 최댓값이 몇 번째 수인지 출력*/
int main(void)
{
	int arr[9];
	int i, max, maxIdx;

	for (i = 0; i < 9; i++)
		scanf("%d", &arr[i]);

	maxIdx = 0;
	max = arr[0];
	for (i = 1; i < 9; i++)
		if (arr[i] > max) {
			max = arr[i];
			maxIdx = i;
		}

	printf("%d\n%d", max, maxIdx + 1);
	return 0;
}