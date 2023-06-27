#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*그룹 단어 체커
그룹 단어 : 각 문자가 연속해서 나타나는 경우
그룹 단어의 개수 출력*/
int is_in(char key, char group[])
{
	int i;
	for (i = 0; group[i] != '\0'; i++)
		if (group[i] == key)
			return 1;
	return 0;
}
int main(void)
{
	char s[102];
	char group[27];
	int n, i, j, idx, flag, check;
	int count = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s", s);

		//초기화
		group[0] = '\0';
		flag = 0;
		idx = 0;

		for (j = 0; s[j] != '\0'; j++) {
			check = is_in(s[j], group);
			if (j == 0 || check == 0) { //인덱스 0 or 전에 나타나지 않았음
				group[idx++] = s[j];
				group[idx] = '\0';
			}
			else if (check == 1 && s[j - 1] != s[j]) //그룹 단어가 아님
				flag = 1;
		}

		if (flag == 0)
			count++;
	}
	printf("%d", count);

	return 0;
}