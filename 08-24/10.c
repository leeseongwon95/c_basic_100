// 실수 한 개 입력받아 그대로 출력하기
// 소숫점 이하가 6자리인 실수 한개 입력
// 입력된 실수 그대로 출력
// 입력 예시 : 1.414000
// 출력 예시 : 1.414000

#include <stdio.h>

int main(void) {
  float f;
  scanf("%f", &f);
  printf("%f", f);
  return 0;
}