// 한 번에 2의 n승으로 출력하기

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", a << b); // 시프트 해서 2의 제곱을 만듬
  return 0;
}