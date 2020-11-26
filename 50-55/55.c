// 둘 다 거짓일 경우에만 참을 출력

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", (!a&&!b));
  return 0;
}