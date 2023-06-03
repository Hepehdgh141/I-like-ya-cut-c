#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;
  scanf("%d-%d", &a, &b); // scanf에서 값을 저장하려면 &a와 같이 변수명 앞에 &를 써야한다. 하지만 string은 그냥 써도 된다.
  // 위 코드와 같이 %d-%d가 나온다면 사용자도 1-2처럼 입력해야한다. 안 그럼 이상한게 나온다. 
  // 또한 scanf를 쓸때 앞에 텍스트를 쓰려면 printf를 쓰고 나서 해야한다.
  // 또한, %d%d처럼 쓴다면 여러줄에 걸쳐 수를 입력받을 수 있다.
  /*
  예제
  printf("금액을 입력하세요. ");
  scanf("%d", &a);
  */
  printf("%d and %d", a, b);
  
  return 0; 
}
