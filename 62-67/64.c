// 정수 한 개 입력받아 분석하기

#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  if (a % 2 == 0) printf("even\n");
  else printf("odd\n");
  if (a > 0) printf("plus\n");
  else printf("minus\n");
  return 0;
}