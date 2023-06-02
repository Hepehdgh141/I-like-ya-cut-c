#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int i; // 이렇게 하면 모든 함수에서 쓰일 수 있다. 
// 또한 선언할때 int a, b = (12, 34); 같이 쓰면 한번에 선언 할 수 있으나 가독성이 떨어진다.
// 다른 방법으로는 int a = 12, b = 34;로 쓸 수 있다.

int main() {
	// 변수를 선언만 하고 값은 지정하지 않아도 된다. 
	// 참고로 const int inteager 처럼 쓴다면 상수, 즉 변경할 수 없는 변수가 된다. int const inteager이나 const int inteager나 똑같다
	int inteager; // 정수 int 변수 이다.
	unsigned int longInteager; // 1부터 42억 까지 저장 할 수 있다.
	bool boolean = true; // true와 false인 참과 거짓을 나타내는 변수이다.
	float floatnum = 3.1415; // 실수 float 변수이다.
	double doubles = 3.14159265358979; // 실수 소수점 14점 자리 까지 저장 할 수 있다.
	long double DOUBLE; // double보단 더 법위가 넓다.
	char character = 'c'; // 한 글자만 쓸때는 ''를 쓴다. 
	char ASCII = 65; // 따옴표를 쓰지 않았으므로 ASCII 번호 65, 즉 A가 된다.
	char Korea[0] = "Korea"  // [K, o, r, e, a, NULL]이 되는데, Korea의 0번째 글자(첫 번째)는 K이므로 K가 값이 된다.
	// 여기 아래부턴 잘 쓰지 않는다.
	signed char a;
	unsigned char b;
	short c;
	short int d;
	unsigned short e;
	unsigned short int f;
	signed int g;
	unsigned h;
	long i;
	long int j;
	signed long k;
	signed long int l;
	unsigned long m;
	unsigned long int n;
	long long o;
	long long int p; 
	signed long long q; 
	signed long long int r;
	unsigned long long s;
	unsigned long long int t;
	// 이 외에도 더 많다.
	
	return 0;
}
