// 한 개의 문장이 입력된다.
// 문장은 여러 개의 단어로 구성될 수 있고 문장의 입력은 엔터키로 끝나며, 문장의 길이는 공백을 포함하여 2000글자를 넘기시오.

#include <stdio.h>
#include <string.h>

int main(void) {
  char c[2001];
  fgets(c, 2000, stdin); // fgets 를 사용 fgets(변수, 글자수, stdin)
  printf("%s", c);
  return 0;
}