#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*���ڿ� �ݺ�
�׽�Ʈ ���̽� ���� T��
���ڿ� S, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ���*/
int main(void)
{
	char S[21];
	char P[161];
	int T, R, i, j, k, idx;

	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %s", &R, S);
		idx = 0;
		for (j = 0; S[j] != '\0'; j++) {
			for (k = 0; k < R; k++)
				P[idx++] = S[j];
		}
		P[idx] = '\0';
		printf("%s\n", P);
	}
	return 0;
}