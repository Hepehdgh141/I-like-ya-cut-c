#include <stdio.h>

// 구조체는 파이썬의 class를 생각하면된다.

struct Student { // 참고로 이름은 생략 가능하다.
  int id;
  long avgPoint;
  char name[21];
  char phoneNum[14]; // 010-XXXX-XXXX+NULL
}; // 일반적인 구조체 선언법.

// 하지만 언제 struct 를 쓰고 앉아 있겠는가? 그래서 typedef를 쓴다.
typedef struct {
  int id;
  long avgPoint;
  char name[21];
  char phoneNum[14];
} student; // typedef 구조체는 마지막에 이름을 써야한다.

int main() {
  struct Student someguy = {21, 9 / 10, "someguyReal", "010-1234-5678"}; // 구조체 변수 선언 방법. 그냥 선언만 하고 값 설정은 안해도 된다.
  someguy.id = 19721121; // 이렇게 따로 설정 할 수 있다.
  student newguy; // typedef 구조체 마지막에 이름 쓴걸 이렇게 쓴다.
  student amogus[2] = {{.name = "aaa"}, {.name = "bb"}}; // 구조체 배열도 만들 수 있다. amogus[1].name 이런식으로 작성해야 된다.
  // 참고로 그냥 구조체도 someguy = {.name = "aaa"} 이런식으로 한번에 다 설정하지 않고 하나만 정해도 된다.

  printf("%d", someguy.id /* 혹은 (*someguy).id */);
  
  return 0;
}

// 참고로 구조체 안에 구조체를 넣을 수 있다. 그렇게 한다면 structname1.structname2.id 같이 쓰면 된다. 참고로 자기 자신도 된다.
