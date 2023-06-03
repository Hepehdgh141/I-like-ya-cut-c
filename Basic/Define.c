#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592 
// 상수 #undef pi로 해제 할 수 있다

int main() {
  printf("%f\n", pi);
  #undef pi
  #define pi 3.14159
  printf("%f", pi);
  return 0;
}
