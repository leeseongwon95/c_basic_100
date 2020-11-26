// 정수 한 개 입력받아 평가 출력하기
/*
90 ~ 100점 : A
70 ~ 89점 : B
40 ~ 69점 : C
0 ~ 39점 : D
*/
#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  if (a >= 90) {
    printf("A");
  } else if (a >= 70) {
    printf("B");
  } else if (a >= 40) {
    printf("C");
  } else {
    printf("D");
  }
  return 0;
}