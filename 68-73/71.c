// 0까지 카운트다운 출력
#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  a--;
  while (a != -1) {
    printf("%d\n", a);
    a--;
  }
  return 0;
}