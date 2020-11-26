/*
입력받은 10진수를 16진수로
입력 : 255
출력 : FF
*/
#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  printf("%X", a); // 대문자 X로 쓰면 출력이 대문자로 바뀜
  return 0;
}