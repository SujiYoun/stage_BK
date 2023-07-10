#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*대표값2
중앙값: 크기 순서대로 늘어 놓았을 때 가장 중앙에 놓인 값
다섯 개의 자연수가 주어질 때 이들의 평균, 중앙값 출력
*/
void insertionSort(int* arr, int size)
{
	int i, j, k, tmp;
	for (i = 1; i < size; i++) {
		for (j = 0; j < i; j++)
			if (arr[i] < arr[j])
				break;

		//arr[i]의 자리: j
		tmp = arr[i];
		for (k = i; k > j; k--)
			arr[k] = arr[k - 1];
		arr[j] = tmp;
	}
	return;
}
int main(void)
{
	int arr[5];
	int i, sum = 0;

	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	insertionSort(arr, 5);

	printf("%d\n%d", sum / 5, arr[2]);

	return 0;
}