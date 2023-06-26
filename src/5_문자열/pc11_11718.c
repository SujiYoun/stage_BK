#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*그대로 출력하기
입력 받은 대로 출력
입력 최대 100줄*/
int main(void)
{
	char str[100];

	while (fgets(str, sizeof(str), stdin) != NULL) { //NULL: 파일의 끝
		fputs(str, stdout);
	}

	return 0;
}