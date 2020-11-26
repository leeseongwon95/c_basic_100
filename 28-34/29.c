/*
입력받은 10진수를 16진수로
입력 : 255
출력 : ff
*/
#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  printf("%x", a);
  return 0;
}