#include <stdio.h>
#include <stdlib.h>

int func(int a, int b); // 함수선언을 할때는 prototype형으로 하면 좋다.

int func(int a, int b) {
  printf("\n%d", (a + b) / 2);
  
  return 0;
}

int main() {
  int d, c;
  
  scanf("%d", &d);
  scanf("\n%d", &c);
  
  
  func(d, c); // 함수 호출, 다른 함수 안에서 함수를 부를 수 있다. 자기 자신도 부를수 있는데, 그걸 재귀 함수라 한다. 후에 설명하다.
}
