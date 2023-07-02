#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*소수 찾기
n개 중에서 소수가 몇 개인지*/
int main(void)
{
	int n, input;
	int i, j, flag, count = 0;

	scanf("%d", &n); //수의 개수
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