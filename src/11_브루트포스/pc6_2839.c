#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*���� ���
3ų�α׷� ����, 5ų�α׷� ����
�ִ��� ���� ������ ���� ���. 
nų�α׷� ����ؾ� �� �� ���� ���� ���*/
void pick(int* item, int n, int* picked, int m, int toPick, int sum, int tmp, int *count)
{ //�ߺ� ����
	int i, smallest, lastIndex;
	lastIndex = m - toPick - 1;
	if (toPick == m)
		smallest = 0;
	else {
		smallest = picked[lastIndex];
		tmp += item[picked[lastIndex]];
	}

	if (sum < tmp)
		return 0;

	if (sum == tmp) {
		if (lastIndex + 1 < *count || *count == -1)
			*count = lastIndex + 1;
	}

	if (toPick == 0)
		return 0;
	
	if (toPick > 0) {
		for (i = smallest; i < n; i++) {
			picked[lastIndex + 1] = i;
			pick(item, n, picked, m, toPick - 1, sum, tmp, count);
		}
	}
}
int main(void)
{
	int item[] = { 3, 5 };
	int* picked;
	int n, count;

	scanf("%d", &n);
	picked = (int*)malloc(sizeof(int) * (n / 3 + 1));
	if (!picked)
		return 0;

	count = -1;
	pick(item, 2, picked, n / 3, n / 3, n, 0, &count);
	printf("%d", count);

	free(picked);
	return 0;
}