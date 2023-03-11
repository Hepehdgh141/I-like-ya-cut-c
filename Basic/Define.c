#include <stdio.h>
#include <stdlib.h>

#define pi 3.141592 // 상수 #undef pi로 해제 할 수 있다

int main() {
  print("%f", pi);
#undef pi
#def pi 3.14159
  printf("%f", pi);
  return 0;
}
