#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  scanf("%d", &a);
  switch(a) { // 괄호안에 변수를 넣는다 
  	case 1: // case 1의 뜻은 a가 1값이라면? 이다.  안에는 무엇이든지 들어갈 수 있다. 
  		printf("1");
		break;
	case 2:
		printf("2");
		break;
	default: // 위의 모든 것이 아닐때 이 코드가 실행된다. 
		printf("defualt\n");
  }
  
  return 0;
}
