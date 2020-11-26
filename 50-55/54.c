// 참 / 거짓이 서로 같을 때만 출력

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", (a&&b)||(!a&&!b)); // && 으로 해야함
  return 0;
}