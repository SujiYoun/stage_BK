#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*��Ʈ�λ��̵�
1,000,000,000���� �۰ų� ���� �ڿ����� �ڸ����� ������������ ����*/
void selectionSort(char* n)
{
	int i, j, minIdx;
	char min;
	for (i = 0; i < strlen(n); i++) {
		min = n[0];
		minIdx = 0;
		for (j = 0; j < strlen(n) - i; j++) {
			if (n[j] < min) { //��������
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