#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0; // 먼저 for문같이 while문 안에 들어갈 변수를 만들어야한다.
  
  while (i <= 10) { // 조건문이 참일때만 실행된다. 
  	printf("i went to %d.\n", i);
	i++;
  } 
  
  i = 0;
  printf("\ni resetted for do-while.\n");
  printf("\n");
  
  // do-while문은 while문과 달리 일단 실행해보고 조건을 확인을 하는 방식이다.
  do {
  	printf("i went to %d.\n", i);
  	i++;
  }while (i <= 10);
  
  return 0;
}
