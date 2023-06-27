#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*합
1 <= n <= 10000
1부터 n까지 합 출력*/
int main(void)
{
	int n, i;
	int total = 0;
	
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		total += i;

	printf("%d", total);
	return 0;
}
