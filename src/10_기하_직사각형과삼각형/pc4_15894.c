#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*수학은 체육과목입니다
한 변의 길이가 1인 정사각형을 피라미드모양으로 이어붙임
가장 아랫부분의 정사각형 개수 n
1 <= n <= 10의 9승
둘레의 길이
–2,147,483,648 ~ 2,147,483,647*/
int main(void)
{
	long n;

	scanf("%ld", &n);

	printf("%ld", n * 4);
	return 0;
}