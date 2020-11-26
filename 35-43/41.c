// 입력된 정수에 1을 더해 출력
// 입력 : 2147483647
// 출력 : 2147483648

#include <stdio.h>

int main(void) {
  long long int a;
  scanf("%lld", &a);
  printf("%lld", a + 1);
}
