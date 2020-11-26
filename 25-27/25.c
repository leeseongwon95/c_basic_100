// 정수 한 개를 입력받아 그대로 출력하기
// 범위는 4,294,967,295 까지

#include <stdio.h>

int main(void) {
  unsigned int a;
  scanf("%u", &a);
  printf("%u", a);
  return 0;
}
