#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("%d", 1234); // 정수 int
  printf("%f", 0.123); // 실수 float 하지만 소수점을 6자리로 늘림 
  printf("%g", 0.123);  // 실수 float 하지만 그냥 출력
  printf("%c", 'a'); // 문자 char
  printf("%s", "Hello guys"); // 문자열 string 근데 굳이?
  printf("\n \t \\ \" \' %%");
  /*
  \n은 줄바꿈, \t은 tab키, \\은 \ 출력, \"는 " 를출력, \'는 '를 출력한다.
  하지만 예외로 %%는 %를 출력한다.  
  */
   
  // 아래의 코드는 cast 연산자이다.
  int a = 65;
  printf("%c", (char)a); // 임시적으로 자료형을 바꿔주는건데, int에서 char로 바꾸면 ASCII 값을 바탕으로 바뀐다.
  
  return 0;
}
