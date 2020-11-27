// 3 6 9 게임

#include <stdio.h>

int main(void) {
  int i,a;
  scanf("%d", &a);
  for (i = 1; i <= a; i++) {
    if (i % 3 == 0) {
      printf("X ");
    } else printf("%d ", i);
  }
  printf("\n");
  return 0;
}