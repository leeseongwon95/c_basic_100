// 문자 두 개를 입력받아 출력
// 순서 바꿔서 출력

#include <stdio.h>

int main(void) {
  char a, b;
  scanf("%c %c", &a, &b);
  printf("%c %c", b, a);
  return 0;
}