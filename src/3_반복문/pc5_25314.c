#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�ڵ� = ü������
long int 4����Ʈ ����
long long int 8����Ʈ ����
int�տ� long�� ���� ������ +4����Ʈ ��� ����
N����Ʈ �������� ������ �� �ִٰ� �����ϴ� ���� �ڷ����� �̸��� ���*/
int main(void)
{
	int n, i;

	scanf("%d", &n);
	for (i = 0; i < n / 4; i++)
		printf("long ");
	printf("int");
	return 0;
}