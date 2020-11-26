/*
정수 한 개를 입력받아 출력한다.
범위는 -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807 까지 이다.
*/

#include <stdio.h>

int main(void) {
  long long int a;
  scanf("%lld", &a);
  printf("%lld", a);
  return 0;
}