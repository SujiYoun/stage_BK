#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*A와 B를 비교*/
int main(void)
{
	int A, B;

	scanf("%d %d", &A, &B);
	if (A > B)
		printf(">");
	else if (A < B)
		printf("<");
	else 
		printf("==");

	return 0;
}