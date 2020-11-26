// 정수 3개를 입력 받아 합과 평균값 출력하기

#include <stdio.h>

int main(void) {
  long long int a, b, c;
  scanf("%lld %lld %lld", &a, &b, &c);
  long long int sum = a + b + c;
  printf("%lld\n", sum);
  printf("%.1f", (float)sum / 3);
  return 0;
}