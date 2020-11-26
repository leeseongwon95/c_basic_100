/*
실수 한 개를 입력받아 그대로 출력
소수점 이하 자리수가 11개 이하인 실수 한 개가 입력된다.
입력된 실수를 소수점 이하 11번째 자리까지 출력된다
*/
#include <stdio.h>

int main(void) {
  double d;
  scanf("%lf", &d);
  printf("%.11lf", d);
  return 0;
}