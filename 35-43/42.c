/*
정수 두 개를 입력받아 자동 계산하기

출력 : 10 3
첫줄 합 13
둘째 줄 차 7
셋째 줄 곱 30
넷째 줄 a를 b로 나눈 몫 3
다섯째 줄 a를 b로 나눈 나머지 1
여섯째 줄 a를 b로 나눈값 (실수, 소수점 셋째자리에서 반올림해서 둘째 자리 까지 출력) 3.33
*/

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", a + b);
  printf("%d\n", a - b);
  printf("%d\n", a * b);
  printf("%d\n", a / b);
  printf("%d\n", a % b);
  printf("%.2f\n", (float)a / (float)b); // 개념 제대로 잡자;
}
