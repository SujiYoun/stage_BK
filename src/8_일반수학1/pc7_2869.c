#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*�����̴� �ö󰡰� �ʹ�
���̰� V������ ���� ���� ������
���� A����, �㿡 �ڴ� ���� B���� �̲�������
��� �ö󰡷��� ��ĥ�� �ɸ��� ��

A B V
�Ϸ� ������ A-B���� �ö�
V - A : ������ �� ���� �ö󰡸� ���� �� ����
*/
int main(void)
{
	int A, B, V;
	int meter = 0;
	int day = 0;

	scanf("%d %d %d", &A, &B, &V);
	//������ �ð��ʰ�
	day = ((V - A) / (A - B));
	meter = (A - B) * day;
	while (meter < V) {
		day++;
		//��
		meter += A;
		if (meter >= V)
			break;
		//��
		meter -= B;
	}
	printf("%d", day);

	return 0;
}