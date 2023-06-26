#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*평균
n개 과목, 현재 성적
새로운 점수 : 점수 / 점수 중 최대값 * 100
새로운 평균 출력*/
int main(void)
{
	int* score;
	int n, i, max;
	double total;

	scanf("%d", &n);
	score = (int*)malloc(sizeof(int) * n);
	if (!score) return 0;

	max = -1;
	for (i = 0; i < n; i++) {
		scanf("%d", &score[i]);
		if (score[i] > max)
			max = score[i];
	}

	total = 0;
	for (i = 0; i < n; i++) {
		total += (double)score[i] / max * 100;
	}
	printf("%f", total / n);

	free(score);
	return 0;
}