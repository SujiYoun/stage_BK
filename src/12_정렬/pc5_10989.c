#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�� �����ϱ�3
��� �Է��� �迭�� �����ϸ� �޸��ʰ�. �޸� ���� 8MB.
�Է��� ���� �������� �ʰ� Ǫ�� ���. (�ԷµǴ� ������ ����)
1 <= n <= 10,000,000
10,000���� �۰ų� ���� �ڿ��� �Է�
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