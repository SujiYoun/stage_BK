#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*달팽이는 올라가고 싶다
높이가 V미터인 나무 막대 오르기
낮에 A미터, 밤에 자는 동안 B미터 미끄러진다
모두 올라가려면 며칠이 걸리는 가

A B V
하루 지나면 A-B미터 올라감
V - A : 마지막 날 낮에 올라가면 오를 수 있음
*/
int main(void)
{
	int A, B, V;
	int meter = 0;
	int day = 0;

	scanf("%d %d %d", &A, &B, &V);
	//없으면 시간초과
	day = ((V - A) / (A - B));
	meter = (A - B) * day;
	while (meter < V) {
		day++;
		//낮
		meter += A;
		if (meter >= V)
			break;
		//밤
		meter -= B;
	}
	printf("%d", day);

	return 0;
}