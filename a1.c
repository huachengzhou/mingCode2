#include <stdio.h>

int a1A() {
	//vs2017Ԥ���������� ��������  _CRT_SECURE_NO_WARNINGS
	int a1, a2;
	puts("������������");
	printf("����������a1! \n");
	scanf("%d", &a1);
	printf("����������a2! \n");
	scanf("%d", &a2);

	printf("a1-a2 = %d \n", a1 - a2);
	printf("a1+a2 = %d \n", a1 + a2);
	printf("a1*a2 = %d \n", a1 * a2);
	printf("a1/a2 = %d \n", a1 / a2);
	printf("a1 %% a2 = %d \n", a1 % a2);
	return 0;
}