#include <stdio.h>
#include <stdlib.h>

int func(int a, int b); // 함수선언을 할때는 prototype형으로 하면 좋다. 괄호 안에 들어간 것은 메개변수로, 
                        // 넓은 의미에서 메개변수는 함수 안에서만 쓰는 변수를 말한다. 또한 메개변수로 무엇이든지 들어갈 수 있다.
                        // Call by Value 함수는 저 파라미터(인수)에 들어가는 부분은 값을 복사해 쓴 것이다. 
                        // Call by Reference는 주소를 전달하므로 Call by Value와 다르게 인수 값을 바꾸면 그 인수가 다른 곳에 있어도
                        // 그 값이 바뀐다.

int func(int a, int b) { return (a + b) * 2; } // int 함수를 쓴다면 int값을 반환하지만 void 함수는 아무것도 반환하지 않는다.

int main() {
  int d, c;
  
  scanf("%d", &d);
  scanf("\n%d", &c);
  
  // func(d, c) 함수 호출, 다른 함수 안에서 함수를 부를 수 있다. 자기 자신도 부를수 있는데, 그걸 재귀 함수라 한다. 후에 설명하다.
  
  printf("%d", func(d, c)) // printf를 쓸때 함수를 호출해 값을 넣고 싶으면 이렇게 쓰면 된다. %d를 쓴 이유는 func함수의 반환값이 int형이기 때문이다.
}
