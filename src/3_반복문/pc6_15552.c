#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*���� A + B
C�� scanf, printf�� ����� �����ϴ�.
T �׽�Ʈ���̽��� ���� <= 1000000
A + B*/
int main(void)
{
	int T, A, B, i;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}