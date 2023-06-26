#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*개수 세기
첫째 줄에 정수의 개수 n.
찾으려는 정수 v
입력으로 주어진 n개의 정수 중 v가 몇 개인지 출력*/
int main(void)
{
	int arr[100];
	int n, v, i;
	int count = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	scanf("%d", &v);
	for (i = 0; i < n; i++)
		if (arr[i] == v)
			count++;
	printf("%d", count);
	return 0;
}