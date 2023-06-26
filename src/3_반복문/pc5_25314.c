#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*코딩 = 체육과목
long int 4바이트 정수
long long int 8바이트 정수
int앞에 long을 붙일 때마다 +4바이트 라고 생각
N바이트 정수까지 저장할 수 있다고 생각하는 정수 자료형의 이름을 출력*/
int main(void)
{
	int n, i;

	scanf("%d", &n);
	for (i = 0; i < n / 4; i++)
		printf("long ");
	printf("int");
	return 0;
}