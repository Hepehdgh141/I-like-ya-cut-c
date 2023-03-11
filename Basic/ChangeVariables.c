#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 0;
  
  a = a - 1; // a에 1를 뺀다. a -= 1랑 a--와 같다.
  a = a + 1; // a에 1를 더한다. a += 1랑 a++()와 같다. 
  a += 1;
  a = a * 2 // a에 2를 곱한다. a *= 2와 같다.
  a = a / 2 // a에 2를 나눈다. a /= 2와 같다.
  a = a % 2 // a를 2 나눈 값의 나머지를 저장한다. a %= 2와 같다.
    
  return 0;
}
