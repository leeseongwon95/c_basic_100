// 둘 다 참일 경우만 참 출력하기

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a != 0 && b != 0) {
    printf("1");
  } else {
    printf("0");
  }
  return 0;
}