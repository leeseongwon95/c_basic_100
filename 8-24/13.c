// 실수 한 개 입력받아 소수점 이하 둘째 자리 까지 출력하기

#include <stdio.h>

int main(void) {
  float f;
  scanf("%f", &f);
  printf("%.2f", f);
  return 0;
}