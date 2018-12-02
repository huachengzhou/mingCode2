#include <stdio.h>

int a1A() {
	//vs2017预处理器输入 消除警告  _CRT_SECURE_NO_WARNINGS
	int a1, a2;
	puts("输入两个整数");
	printf("请输入整数a1! \n");
	scanf("%d", &a1);
	printf("请输入整数a2! \n");
	scanf("%d", &a2);

	printf("a1-a2 = %d \n", a1 - a2);
	printf("a1+a2 = %d \n", a1 + a2);
	printf("a1*a2 = %d \n", a1 * a2);
	printf("a1/a2 = %d \n", a1 / a2);
	printf("a1 %% a2 = %d \n", a1 % a2);
	return 0;
}