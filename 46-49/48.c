// b 가 a 보다 크거나 같으면 1, b가 a보다 작으면 0

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if (b >= a) printf("1");
  else printf("0");
  return 0;
} 