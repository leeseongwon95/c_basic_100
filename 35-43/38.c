// 문자 한 개 입력받아 다음 문자 출력하기
// 입력된 문자의 아스키코드 값 바로 다음 코드 값에 해당하는 문자를 출력한다
// 입력 : a
// 출력 : b

#include <stdio.h>

int main(void) {
  char c;
  scanf("%c", &c);
  printf("%c", c + 1);
  return 0;
}