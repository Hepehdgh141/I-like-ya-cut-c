#include <stdio.h>
#include <stdlib.h>

int main() {
  int i; // 먼저 for문 안에 들어갈 변수를 만들어야한다.
  
  for (i = 1; i < 10; i++) { // 첫번째가 값 저장, 두번째가 조건문(끝나는 조건), 마지막 i를 반복할때마다 뭘 해야하는지 적는 곳이다. 또한 1부터 9까지 나오는데, 10번 반복하려면 i <= 1을 써야한다. 
  	printf("%d\n", i);
  }
  for (i = 10; i > 1; i--) { // 10부터 2까지 나오는데, 10번 반복하려면 i >= 1을 써야한다. 
	  printf("%d\n", i);
  } 
  
  return 0;
}
