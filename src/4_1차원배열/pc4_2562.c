#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�ִ�
9���� ���� �ٸ� �ڿ��� �� �ִ��� ����ϰ�, �ִ��� �� ��° ������ ���*/
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