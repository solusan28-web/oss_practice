#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	char operator;
	int result;

	printf("정수 두 개와 연산자를 입력하세요\n");
	printf("정수 >> \n");
	scanf("%d %d", &a, &b);
	printf("연산자(+, -, *, /) >> ");
	scanf(" %c", &operator);
	if (operator == '+')
		printf("%d + %d = %d", a, b, a + b);
	else if (operator == '-')
		printf("%d - %d = %d", a, b, a - b);
	else if (operator == '*')
		printf("%d * %d = %d", a, b, a * b);
	else if (operator == '/')
		printf("%d / %d = %d", a, b, a / b);
	else
		printf("잘못된 연산자입니다.");

}

