#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
	int num;
	
	printf("10000 미만 정수 입력 : ");
	scanf("%d", &num);
	
	if (num) {
		if (num < 0) {
			if (-num < 10) {
				printf("음수 한 자리수\n");
			}
			else if(-num < 100) {
				printf("음수 두 자리수\n");
			}
			else if(-num < 1000) {
				printf("음수 세 자리수\n");
			}
			else if(-num < 10000) {
				printf("음수 네 자리수\n");
			}
		}
		else if (num < 10) {
			printf("양수 한 자리수\n");
		}
		else if (num < 100) {
			printf("양수 두 자리수\n");
		}
		else if (num < 1000) {
			printf("양수 세 자리수\n");
		}
		else if (num < 10000) {
			printf("양수 네 자리수\n");
		}
	}
	else {
		printf("0 입니다\n");
	}
 	
		
    return 0;
}
