#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*크로아티아 알파벳
c= / c- / dz= / d- / lj / nj / s= / z=
몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력*/
int main(void)
{	
	char s[100];
	int i, cnt = 0;

	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'c' && s[i + 1] == '=')
			i++;
		else if (s[i] == 'c' && s[i + 1] == '-')
			i++;
		else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
			i += 2;
		else if (s[i] == 'd' && s[i + 1] == '-')
			i++;
		else if (s[i] == 'l' && s[i + 1] == 'j')
			i++;
		else if (s[i] == 'n' && s[i + 1] == 'j')
			i++;
		else if (s[i] == 's' && s[i + 1] == '=')
			i++;
		else if (s[i] == 'z' && s[i + 1] == '=')
			i++;

		cnt++;
	}

	printf("%d", cnt);
}