#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	
	if (num1 % 2 ^ num2 % 2) {
		printf("%d", num1 - num2);
	}
	else if (num1 % 2 && num2 % 2) {
		printf("%d", num1 + num2);
	}
	else {
		printf("%d", num1 * num2);
	}
	
    return 0;
}
