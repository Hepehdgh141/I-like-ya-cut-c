#include <stdio.h>

int main() {
  // 포인터는 간결하고, 빠른 코드를 만들기 위해 사용된다고 한다. 근데 솔직히 말해서 겁나 복잡하다 
  
  int number = 21;
  
  int *ptr = &number; // 포인터 변수 선언 방법. int * ptr이든 int* ptr이든 다 똑같다. 
  // 참고로 '&'과 '*'을 쉽게 말하면 '&'는 주소 값이고, '*'는 값이다.
  // 덧붙이자면, 포인터를 가르키는 포인터라면 int **ptr 이런식으로 써야한다. 또 포인터를 가르키는 포인터를 가르키는 포인터라면 int ***ptr.. 이런식으로 쓰면 된다. 근데 포인터가 들어있는 배열을 가르키는 포인터라면 그냥 * 하나만 쓰면 된다.
  // 배열은 배열 이름자체가 주소값이다.
  
  // 포인터 주소는 메모리 주소 자체를 가리키며, 해당 주소에 저장된 데이터의 타입을 알려주는 용도로 사용한다.
  
  printf("number: %d\n", number);
  printf("ptr's address: %d\n", ptr); // 포인터 주소를 출력하는 방법. 포인터 주소는 항상 바뀐다. 
  printf("ptr value: %d", *ptr); // ptr*, ptr *은 안되고 * ptr은 된다.
  
  return 0;
}
