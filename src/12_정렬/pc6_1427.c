#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*소트인사이드
1,000,000,000보다 작거나 같은 자연수의 자리수를 내림차순으로 정렬*/
void selectionSort(char* n)
{
	int i, j, minIdx;
	char min;
	for (i = 0; i < strlen(n); i++) {
		min = n[0];
		minIdx = 0;
		for (j = 0; j < strlen(n) - i; j++) {
			if (n[j] < min) { //내림차순
				min = n[j];
				minIdx = j;
			}
		}

		n[minIdx] = n[strlen(n) - i - 1];
		n[strlen(n) - i - 1] = min;
	}
}
int main(void)
{
	char number[11];
	int i;

	scanf("%s", number);
	selectionSort(number);

	printf("%s", number);
	return 0;
}