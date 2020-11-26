/*
입력 : 4
출력 : 0
      1
      2
      3
      4
*/
#include <stdio.h>

int main(void) {
  int a, i;
  scanf("%d", &a);
  for (i = 0; i <= a; i++) {
    printf("%d\n", i);
  }
  return 0;
}