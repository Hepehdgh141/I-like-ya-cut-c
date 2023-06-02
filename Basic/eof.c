// 이 프로그램은 ^Z(ctrl+z), ^D(ctrl+d)를 누를때 종료되는 while문을 응용한 프로그램이다.
// 참고로 이 프로그램은 replit에서 작동이 안된다

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int a = 0;
    while (true) {
        if (scanf("%d", &a) != 1) {
            break;
        }
        if (a == EOF) {
            break;
        }
        printf("%d\n", a);
    }
    
    return 0;
}
