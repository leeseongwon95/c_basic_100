// and 연산
// 0000
// 1111
// 0000

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", (a&b));
  return 0;
}