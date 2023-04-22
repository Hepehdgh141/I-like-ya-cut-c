#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
	int num;
	scanf("%d", &num);
	printf("num은 2와 3의 공배수");
	printf(num % 2 && num % 3 ? "가 아닙니다\n" : "입니다\n");
	printf("또한 num은 12와 30의 공약수");
	printf(num * 12 && num * 30 ? "가 아닙니다" : "입니다");
	
    return 0;
}
