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
  
  // 아래 코드는 do-while문인데 솔직히 굳이 쓸 필요는 없다. 
  do {
  	printf("i went to %d.\n", i);
  	i++;
  }while (i <= 10);
  
  return 0;
}
