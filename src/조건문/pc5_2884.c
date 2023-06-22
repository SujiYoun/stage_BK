#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*알람 시간 45분 앞으로 설정하기*/
int main(void)
{
	int H, M; //H시 M분
	int newH, newM;

	scanf("%d %d", &H, &M);

	/*if (M - 45 >= 0) {
		newM = M - 45;
		newH = H;
	}
	else { //M - 45 < 0
		newM = 60 - (45 - M);
		if (H - 1 < 0) //0시
			newH = 23;
		else
			newH = H - 1;
	}*/
	if (M - 45 >= 0)
		printf("%d %d", H, M - 45);
	else {
		printf("%d %d", (H + 24 - 1) % 24, M - 45 + 60);
	}
	return 0;
}