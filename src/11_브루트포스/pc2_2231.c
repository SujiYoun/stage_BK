#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*분해합
n의 분해합: n과 n을 이루는 각 자리수의 합
m의 분해합 = n, m은 n의 생성자
ex) 245의 분해합: 245 + 2 + 4 + 5 = 256
n의 가장 작은 생성자 출력
?자연수를 만들어 분해합을 구한 후 비교
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
	//중복순열
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

	pick(10, picked, len, len, m, 0, 0, &rslt); //생성자 구하기
	
	//생성자가 없는 경우에는 0을 출력
	printf("%d", rslt);

	free(picked);
	return 0;
}