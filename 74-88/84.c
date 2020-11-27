/*
정수 1개를 입력받는다.
(1 ~ 100)

1부터 입력한 정수보다 작거나 같을 때까지 1씩 증가시켜 출력하되
3의 배수는 출력하지 않는다.

10

1 2 4 5 7 8 10
*/

#include <stdio.h>

int main(void) {
  int i = 0, n;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    if (i % 3 != 0) {
      printf("%d ", i);
    }
  }
  return 0;
}