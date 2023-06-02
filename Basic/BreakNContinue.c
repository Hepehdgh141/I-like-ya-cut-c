#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // 그냥 true를 써도 되는 컴퓨터가 있지만 아닐 수도 있으니 true false를 쓴다면 이 헤더를 써야한다.  

int main() {
  int i; 
  
  while (true) { // 이것 같이 while문에 true를 쓰면 무한 반복문이 된다. 
	i++;
	if(i > 100) {
		break; // 이럴 때 break를 써주면 반복문이 그냥 끝난다. 
	} 
  } 
  
  i = 0; 
  
  for (i = 0; i <= 10; i++) {
  	if (i % 2 == 0) { // i를 2로 나눌때의 나머지가 0이라면(짝수라면) 
  		continue; // 아래 코드를 무시한다.  
	 }
	 printf("%d\n", i); // 이렇게 한다면 홀수만 출력하는 프로그램을 만들 수 있다. 
  } 
  
  return 0;
}
