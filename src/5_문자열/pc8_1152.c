#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*단어의 개수
단어의 개수 출력*/
int main(void)
{
	char str[1000002];
	int i, count = 0; //공백 하나 입력시 0 출력.

	fgets(str, sizeof(str), stdin); //공백문자 포함 입력. 시간초과
	if (strlen(str) > 2 || str[0] != ' ') //단어 하나 입력시
		count = 1;

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ' ' && str[i + 1] != ' ' && i != 0 && i != strlen(str) - 2) //'\n'
			count++;
	}

	printf("%d", count);
	return 0;
}