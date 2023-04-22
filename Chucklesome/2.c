#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
	int num1, num2;
	double num3, num4, num5, num6, num7, num8, max;
	scanf("%d %d", &num1, &num2);
	scanf("%lf %lf %lf %lf %lf", &num3, &num4, &num5, &num6, &num7, &num8);
	
	if (num1 < 0) {
		printf("음수 입니다\n");
	}
	else {
		printf("양수 입니다\n");
	}
	if (num1 % 2) {
		printf("홀수 입니다\n");
	}
	else {
		printf("짝수 입니다\n");
	}
	if (num1 % 3) {
		printf("3의 배수가 아닙니다\n");
	}
	else {
		printf("3의 배수입니다\n");
	}
	if (num1 > num2) {
		printf(num1 % num2 ? "num1 / num2는 나누어 떨어지지 않습니다\n" : "num1 / num2는 나누어 떨어집니다\n");
	}
	else if(num1 < num2) {
		printf(num2 % num1 ? "num2 / num1는 나누어 떨어지지 않습니다\n" : "num2 / num1는 나누어 떨어집니다\n");
	}
	else {
		printf("num1과 num2는 같습니다\n");
	}
	if (num3 > 0) {
		printf("절댓값 num3 = +%.2lf\n", num3);
	}
	else if(num3 < 0) {
		printf("절댓값 num3 = +%.2lf\n", (num3 * -1));
	}
	else {
		printf("num3는 0 입니다\n");
	}
	
	max = num4;

	if (num5 > max) {
		max = num5;
	}
	if (num6 > max) {
		max = num6;
	}
	if (num7 > max) {
		max = num7;
	}
	if (num8 > max) {
		max = num8;
	}
	
	printf("%.2lf", max);
		
    return 0;
}
