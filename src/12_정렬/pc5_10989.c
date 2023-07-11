#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*수 정렬하기3
모든 입력을 배열에 저장하면 메모리초과. 메모리 제한 8MB.
입력을 전부 저장하지 않고 푸는 방법. (입력되는 정수의 범위)
1 <= n <= 10,000,000
10,000보다 작거나 같은 자연수 입력
*/
int main(void)
{
	int arr[10001] = { 0, };
	int n, input, i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &input);
		arr[input]++;
	}

	for (i = 0; i < 10001; i++) {
		if (arr[i] > 0) {
			for (j = 0; j < arr[i]; j++)
				printf("%d\n", i);
		}
	}

	return 0;
}