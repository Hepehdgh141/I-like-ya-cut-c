#include <stdio.h>
#include <stdlib.h>

int main() {
  // a > b a가 b보다 크다면 참을 반환한다.
  // a < b a가 b보다 작다면 참을 반환한다.
  // a <= b a가 b 이하라면 참을 반환한다.
  // a >= b a가 b 이상이라면 참을 반환한다. 
  // a == b a가 b라면 참을 반환한다.
  // a != b a가 b가 아니라면 참을 반환한다.
  // 조건문1 || 조건문2 둘중에 하나라도 참이면 참을 반환한다.
  // 조건문1 && 조건문2 둘다 참이라면 참을 반환한다.
  // !조건문 결과 값을 거꾸로 반환한다.
  // 참고로 조건문에 (a)처럼 쓰면 (a == true)같이 바뀐다.
  
  // 아래 코드는 조건 연산자다.
  int a = 1, b = 2;
  printf(a > b ? "DAMN" : "NO"); // a가 b보다 크다면 ? (참일때) : (거짓일때)
  int q = z > x ? z : x; // 이렇게도 쓸 수 있다.
  /*
  int a = true;
  printf(a ? "True", "False");
  */
    
  //아래 코드는 if 문이다.
  if (a > b) { // 괄호 안에 조건문을 넣는다.
    return 6;
  }
  else if (a == b) { // 위 if문이 거짓일때 또 if문을 쓰는법
    return 6;
  }
  else { // 위 조건문들이 모드 아닐때
    return 0; // 참고로 return이 나오면 프로그램은 끝난다.
  }
  
  return 0;
}
