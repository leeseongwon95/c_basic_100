/*
단어(영어)를 하나 입력받는다 (단, 단어의 길이는 20글자 이하이다.)
단어(영어)를 문자 단위로 나누어 한 줄에 한 개씩 
입력 : Boy
출력 : 'B'
      'o'
      'y'
*/

#include <stdio.h>

int main(void) {
  int i;
  char c[21];
  scanf("%s", c);
  for (i = 0; i < 21; i++) {
    if (c[i] == '\0') break;
    printf("\'%c\'\n", c[i]);
  }
  return 0;
}