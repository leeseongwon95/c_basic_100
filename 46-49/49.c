// a와 b가 서로 다르면 1, 같으면 0

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a != b) printf("1");
  else printf("0");
  return 0;
}