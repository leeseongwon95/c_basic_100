// xor ^
// 0101
// 1111
// = 1010

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", (a^b));
  return 0;
}