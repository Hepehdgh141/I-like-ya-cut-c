#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 0;
  
  a = a - 1; // a에 1를 뺀다. a -= 1랑 a--와 같다.
  a = a + 1; // a에 1를 더한다. a += 1랑 a++와 같다. 
  // 참고로 a++, ++a는 자기 혼자 쓰면 상관 없지만, b = a++ 같은 경우엔 b에 a를 저장하고 a에 1을 더하는 식이고,
  // b = ++a 같은 경우엔 반대로 a에 1을 더하고 b에 a를 저장한다. --a, a-- 같은 경우도 같다.
  a += 1;
  a = a * 2; // a에 2를 곱한다. a *= 2와 같다.
  a = a / 2; // a에 2를 나눈다. a /= 2와 같다.
  a = a % 2; // a를 2 나눈 값의 나머지를 저장한다. a %= 2와 같다.
    
  return 0;
}
