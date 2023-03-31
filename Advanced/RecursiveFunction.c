#include <stdio.h>
#include <stdlib.h>

int FibonaciFunc(int n);

int FibonaciFunc(int n) { 
    if (n == 1) return 1; // 재귀함수가 끝나는 조건
    return n * factorial(n - 1); // 함수 안에 함수 값
}

int main() {
  FibonaciFunc(32);
}
