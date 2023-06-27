#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*너의 평점은
전공평점: 전공과목별(학점 * 과목평점)의 합을 학점의 총합으로 나눈 값
학점은 1.0,2.0,3.0,4.0중 하나
과목평점
A+	4.5
A0	4.0
B+	3.5
B0	3.0
C+	2.5
C0	2.0
D+	1.5
D0	1.0
F	0.0
P/F는 계산에서 제외
과목명 학점 등급 20줄
*/
int main(void)
{
	char subject[51], grade[3];
	int i;
	double credit, gradeNum, scoreSum = 0, creditSum = 0;
	for (i = 0; i < 20; i++) {
		scanf("%s %lf %s", subject, &credit, grade);

		if (strcmp(grade, "P") == 0)
			continue;
		else if (strcmp(grade, "A+") == 0)
			gradeNum = 4.5;
		else if (strcmp(grade, "A0") == 0)
			gradeNum = 4.0;		
		else if (strcmp(grade, "B+") == 0)
			gradeNum = 3.5;		
		else if (strcmp(grade, "B0") == 0)
			gradeNum = 3.0;		
		else if (strcmp(grade, "C+") == 0)
			gradeNum = 2.5;		
		else if (strcmp(grade, "C0") == 0)
			gradeNum = 2.0;		
		else if (strcmp(grade, "D+") == 0)
			gradeNum = 1.5;		
		else if (strcmp(grade, "D0") == 0)
			gradeNum = 1.0;		
		else // (strcmp(grade, "F") == 0)
			gradeNum = 0.0;
		
		scoreSum += credit * gradeNum;
		creditSum += credit;
	}

	printf("%f", scoreSum / creditSum);
}