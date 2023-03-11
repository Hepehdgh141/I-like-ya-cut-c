#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;
  scanf("%d-%d", &a, &b); // scanf에서 값을 저장하려면 &a와 같이 변수명 앞에 &를 써야한다.
  // 위 코드와 같이 %d-%d가 나온다면 사용자도 1-2처럼 입력해야한다. 안 그럼 이상한게 나온다. 
  printf("%d and %d", a, b);
  
  return 0; 
}
