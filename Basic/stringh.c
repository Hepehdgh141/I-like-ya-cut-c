#include <stdio.h>
#include <string.h>

int main() {
  char str1[15] = "Hello";
  char str2[15];
  strcpy(str2, str1); // str1의 내용을 str2에 복사하는 명령문.

  strcat(str1, " ");
  memset(str2, 0, sizeof(str2)); // 스트링은 어쩔 수 없이 다시 바꾸려면 이렇게
                                 // 하고 아래 처럼 해야한다.
  strcat(str2, "world!");

  strcat(str1, str2); // str1의 끝에 str2를 이어붙이는 명령문.

  memset(str1, 0, sizeof(str1));
  memset(str2, 0, sizeof(str2));
  strcat(str1, "Hello, World!");
  strcat(str2, "Hello, world!");
  int cmp = strcmp(
      str1, str2); // 대소문자도 구분하는 명령문. 둘이 똑같다면 0, 다르다면 첫
                   // 번째로 서로 다른 문자의 ASCII코드를 반환함. 참고로 str1의
                   // 다른 문자 - str2의 다른문자로 반환함.
  if (cmp == 0) {
    printf("두 문자열은 같습니다.\n");
  } else {
    printf("두 문자열은 다릅니다.\n");
  }

  char str[14] = "Hello, world!";
  int len = strlen(str); // 문자열의 길이를 반환함.
  printf("문자열 \"%s\"의 길이는 %d입니다.\n", str, len);

  memset(str, 0, sizeof(str));
  strcat(str, "Hello, world!");
  char ch = 'w';
  char *ptr = strchr(str, ch); // 문자열에서 'w'가 처음 나타나는 위치를 찾음.
                               // 포인터를 쓰므로 아직 이해하지 않아도
  if (ptr != NULL) {
    printf("문자열 \"%s\"에서 문자 '%c'는 %ld번째에 위치합니다.\n", str, ch,
           ptr - str);
  } else {
    printf("문자열 \"%s\"에서 문자 '%c'는 발견되지 않았습니다.", str, ch);
  }

  return 0;
}
