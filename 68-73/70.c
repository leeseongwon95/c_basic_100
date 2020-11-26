// 정수 한 개 입력받아 카운트다운 출력

#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  while (a != 0) {
    printf("%d\n", a);
    a--;
  }
  return 0;
}