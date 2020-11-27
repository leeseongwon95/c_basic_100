// 시간입력받아서 그대로 출력
// 입력 예시 : 3:16
// 출력 예시 : 3:16
#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d:%d", &a, &b);
  printf("%d:%d", a, b);
  return 0;
}