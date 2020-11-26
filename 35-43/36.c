// 정수 두개 입력받아 출력하기 
// 입력 : 2147483647 2147483647
// 출력 : 4294967294

#include <stdio.h>

int main(void) {
  long long int a, b;
  scanf("%lld %lld", &a, &b);
  printf("%lld", a + b);
  return 0;
}