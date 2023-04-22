#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
	int num;
	scanf("%d", &num);
	/*
	switch(num) {
		case 2:
			printf("스포츠카\n");
		case 5:
			printf("승용차\n");
		case 7:
			printf("SUV\n");
		case 9:
			printf("승합차\n");
		case 12:
			printf("미니버스\n");
		default:
			printf("입력 오류\n");
	}
	*/
	
	if (num != 2 && num != 5 && num != 7 && num != 9 && num != 12){
		printf("입력 오류\n");
	}
	if (num == 2 && num != 5 && num != 7 && num != 9 && num != 12){
		printf("스포츠카\n");
	}
	if (num != 2 && num == 5 && num != 7 && num != 9 && num != 12){
		printf("승용차\n");
	}
	if (num != 2 && num != 5 && num == 7 && num != 9 && num != 12){
		printf("SUV\n");
	}
	if (num != 2 && num != 5 && num != 7 && num == 9 && num != 12){
		printf("승합차\n");
	}
	if (num != 2 && num != 5 && num != 7 && num != 9 && num == 12){
		printf("미니버스\n");
	}
	
	if (num == 2) {
		printf("스포츠카");
	}
	else if(num == 5) {
		printf("승용차");
	}
	else if(num == 7) {
		printf("SUV");
	}
	else if(num == 9) {
		printf("승합차");
	}
	else if(num == 12) {
		printf("미니버스");
	}
	else {
		printf("입력 오류");
	}
		
    return 0;
}
