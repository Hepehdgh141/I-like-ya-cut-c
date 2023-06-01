#include <stdio.h>
#include <Windows.h>

int Count(int n);

int Count(int n) {
    if (n == 0){ // 끝나는 조건. n이 0이 될때, 즉 끝나는 조건.
    	printf("\nROUND ENDED");
	return 0;
    }
    printf("%d SECONDS REMAINS", n);
    n--;
    Sleep(1000)
    printf("\n");
    Count(n); // 이렇게 for문이나 while문 대신 이렇게 재귀함수를 써서 쓸 수 있다. 백준 같은걸 풀때 시간/메모리 상으로 써야하는 경우도 종종 있다.
}

int main() {
  Count(10);
}
