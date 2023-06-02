#include <stdio.h>
#include <stdlib.h>

int a = 0;

int hanoiTower(number, from, to, other) {
  if (number == 0)
    return 0;

  hanoiTower(number - 1, from, other, to);

  getchar();

  printf("%d번칸에서 %d번칸으로 옮긴다. (%d번째 동작)\n \n", from + 1, to + 1,
         (a++) + 1);

  hanoiTower(number - 1, other, to, from);
}

int main() {
  int num, from, to, other;

  printf("원반의 개수 : ");
  scanf("%d", &num);
  printf("\n원반들이 위치한 곳의 칸 번호(1, 2, 3) : ");
  scanf("%d", &from);
  printf("\n원반들을 옮길 목적지 칸 번호 : ");
  scanf("%d", &to);
  printf("\n목적지가 아닌 곳의 칸 번호 : ");
  scanf("%d", &other);
  from--;
  to--;
  other--;

  hanoiTower(num, from, to, other);
}
