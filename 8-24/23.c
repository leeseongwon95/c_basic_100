/*
시간이 [시:분:초]의 형태로 입력된다.
분 만 출력한다. (단, 10보다 작은 경우 불필요한 0은 출력하지 않는다.)
17:23:57
23
*/
#include <stdio.h>

int main(void) {
  int h, m, s;
  scanf("%d:%d:%d", &h, &m, &s);
  printf("%d", m);
  return 0;
}