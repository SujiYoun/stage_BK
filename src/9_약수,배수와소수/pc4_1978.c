#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�Ҽ� ã��
n�� �߿��� �Ҽ��� �� ������*/
int main(void)
{
	int n, input;
	int i, j, flag, count = 0;

	scanf("%d", &n); //���� ����
	for (i = 0; i < n; i++) {
		scanf("%d", &input);
		flag = 1;
		for (j = 2; j < input; j++)
			if (input % j == 0)
				flag = 0;
		
		if (flag == 1 && input != 1)
			count++;
	}
	printf("%d", count);

	return 0;
}