// 짝수 합 구하기
// 입력 : 5 (2 + 4)
// 출력 : 6

#include <stdio.h>

int main(void) {
  int a, i, sum = 0;
  scanf("%d", &a);
  for (i = 1; i <= a; i++) {
    if (i % 2 == 0) {
      sum += i;
    }
  }
  printf("%d", sum);
  return 0;
}