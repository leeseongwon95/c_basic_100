/*
영문자 한 개를 입력받아 해당되는 아스키코드 값으로 변환
입력 : A
출력 : 65
*/
#include <stdio.h>

int main(void) {
  char a;
  scanf("%c", &a);
  printf("%d", a);
  return 0;
}