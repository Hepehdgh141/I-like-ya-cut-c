// 이 프로그램은 ^Z(ctrl+z)를 누를때 종료되는 while문을 응용한 프로그램이다.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int a;
	while (true) {
		a = scanf("%d", &a); // a = getchar();
		printf("%d", a);
		if (a == EOF) // EOF는 end of file의 약자이다. C언어에선 -1
		{
			break;
		}
		putchar(a); // 숫자를 ASCII로 바꿔준다.
	}
	
	return 0;
}
