#include <stdio.h>
#include <stdlib.h>

int i; // 이렇게 하면 모든 함수에서 쓰일 수 있다. 

int main() {
	// 변수를 선언만 하고 값은 지정하지 않아도 된다. 
	int inteager; // 정수 int 변수 이다. 
	bool boolean = true; // true와 false인 참과 거짓을 나타내는 변수이다.
	float floatnum = 3.1415; // 기수법 할때 소수 float 변수이다.
	char character = 'c'; // 한 글자만 쓸때는 ''를 쓴다. 
	char ASCII = 65; // 따옴표를 쓰지 않았으므로 ASCII 번호 65, 즉 A가 된다.
	char Korea[0] = "Korea"  // [K, o, r, e, a, NULL]이 되는데, Korea의 0번째 글자(첫 번째)는 K이므로 K가 값이 된다. 
}
