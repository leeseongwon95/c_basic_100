// 실수 한 개가 입력된다 (단, 입력 값은 정수부가 100,000을 넘지않으며, 소수점 0이하는 0으로 시작하지 않으며, 6자리 이하이다.)
// 첫번째 부분에 정수부분을 
// 두번째 부분에 실수 부분을 입력된 자리수 만큼 그대로 출력한다.
// 입력 예시 : 1.414213
// 출력 예시 :  1
//            414213

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d.%d", &a, &b);
  printf("%d\n%d", a, b);
  return 0;
}