#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*����
1���濡�� n�� ����� �� �� ����ϴ� �ּ� ���� ��
1 : 1
2~7(6) : 2
8~19(12) : 3
20~37(18) : 4
*/
int main(void)
{
	int n, i;
	int roomCnt = 1; //���
	int hiveNum = 1; //���� ����

	scanf("%d", &n);

	while (n > hiveNum) {
		hiveNum += 6 * roomCnt;
		roomCnt++;
	}

	printf("%d", roomCnt);
	return 0;
}