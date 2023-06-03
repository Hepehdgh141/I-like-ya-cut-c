#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("%d", 1234); // 정수 int. i로 해도 같다 참고로 "%d", 19 / 10같은걸 하면 소수점 뒤에 있는걸 버리고 출력한다.
  printf("%f", 0.123); // 실수 float 하지만 소수점을 6자리로 늘림 
  printf("%g, %G", 0.123, 0.123);  // 크기에 따라 실수 float 하지만 그냥 그대로 출력할 수도있고 혹은 e를 출력할 수도있다. G는 e가 E로 출력된다.
  printf("%f, %e, %E", 12.566371, 1.256637e+001, 1.256637e+001); // f는 double을 소수로 출력하고 e는 double을 지수로 출력한다. E는 e부분을 E로 바꾼다.
  printf("%c, %C", 'a', 'a'); // 문자 char, 혹은 숫자를 ASCII코드로 바꿈. C와 c는 다를게 없다.
  printf("%s", "Hello guys"); // 문자열 string 근데 굳이?
  printf("%lf", 123.412); // 부동소수점 double
  printf("\n \t \\ \" \' %%");
  /*
  p: 포인터 주소를 출력
  o: int값을 부호 없는 8진수로 출력
  u: int값을 부호 없는 10진수로 출력
  x: int값을 부호 없는 16진수로 출력 10에서 15까진 'a' ~ 'f'
  X: int값을 부호 없는 16진수로 출력 10에서 15까진 'A' ~ 'F'
  ld: long값 부호 있는 10진수로 출력
  lld: long long값 부호 있는 10진수로 출력
  lf: long double값 10진수 부동소수점 실수 출력
  */
  /*
  \n은 줄바꿈, \t은 tab키, \\은 \ 출력, \"는 " 를출력, \'는 '를 출력한다.
  하지만 예외로 %%는 %를 출력한다. 
  */
   
  // 아래의 코드는 cast 연산자이다.
  int a = 65;
  printf("%c", (char)a); // 임시적으로 자료형을 바꿔주는건데, int에서 char로 바꾸면 ASCII 값을 바탕으로 바뀐다.
  
  return 0;
}
