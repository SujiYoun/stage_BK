#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*��ǥ��2
�߾Ӱ�: ũ�� ������� �þ� ������ �� ���� �߾ӿ� ���� ��
�ټ� ���� �ڿ����� �־��� �� �̵��� ���, �߾Ӱ� ���
*/
void insertionSort(int* arr, int size)
{
	int i, j, k, tmp;
	for (i = 1; i < size; i++) {
		for (j = 0; j < i; j++)
			if (arr[i] < arr[j])
				break;

		//arr[i]�� �ڸ�: j
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