#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*������
n�� ������: n�� n�� �̷�� �� �ڸ����� ��
m�� ������ = n, m�� n�� ������
ex) 245�� ������: 245 + 2 + 4 + 5 = 256
n�� ���� ���� ������ ���
?�ڿ����� ����� �������� ���� �� ��
*/
int jarisu(int num)
{
	int len = 0;
	while (num > 0) {
		len++;
		num /= 10;
	}
	return len;
}
void pick(int n, int* picked, int m, int toPick, int sum, int tmp, int num, int *rslt)
{
	int i, smallest, lastIndex;
	//�ߺ�����
	lastIndex = m - toPick - 1;
	smallest = 0;
	if (*rslt != 0)
		return;

	if (toPick != m) {
		num = num * 10 + picked[lastIndex];
		tmp += picked[lastIndex];
	}

	if (num + tmp == sum)
		*rslt = num;

	if (toPick == 0)
		return;

	if (toPick > 0) {
		for (i = smallest; i < n; i++) {
			picked[lastIndex + 1] = i;
			pick(n, picked, m, toPick - 1, sum, tmp, num, rslt);
		}
	}
}
int main(void)
{
	int* picked;
	int m, len, rslt = 0;

	scanf("%d", &m);
	len = jarisu(m);
	picked = (int*)malloc(sizeof(int) * len);
	if (!picked)
		return 0;

	pick(10, picked, len, len, m, 0, 0, &rslt); //������ ���ϱ�
	
	//�����ڰ� ���� ��쿡�� 0�� ���
	printf("%d", rslt);

	free(picked);
	return 0;
}