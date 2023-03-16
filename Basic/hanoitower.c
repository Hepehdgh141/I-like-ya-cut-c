#include <stdio.h>
#include <stdlib.h>

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

hanoiTower(number, from, to, other) {
  // number: 원반의 수
  // from: 원반들이 위치한 곳의 번호
  // to: 원반들을 옮길 목적지 번호
  // other: 나머지 한 곳(목적지가 아닌) 곳 번호

  // 모두 옮겼으면 종료
  if (number == 0) {
  	return;	
  }

  // 가장 아래 원반을 제외한 원반들을 재귀적으로 목적지가 아닌 곳으로 옮김
  hanoiTower(number - 1, from, other, to);

  // 가장 아래 원반을 목적지로 옮김
  printf("%d번칸에서 %d번칸으로 옮긴다.\n \n", from + 1, to + 1);

  // 목적지가 아닌 곳으로 옮겼던 원반들을 재귀적으로 목적지로 옮김
  hanoiTower(number - 1, other, to, from);
}
