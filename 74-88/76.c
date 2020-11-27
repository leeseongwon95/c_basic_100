/*
1, 2, 3, 4, 5 ...
쭉 더해서 입력한 값에 도달하면 맨 마지막에 더한 값을 출력한다.
입력 예시 : 55
출력 예시 : 10
*/

#include <stdio.h>

int main(void) {
  int i, sum = 0;
  int a;
  scanf("%d", &a);
  for (i = 1;;i++) {
    sum += i;
    if (sum >= a) break;
  }
  printf("%d", i);
  return 0;
}