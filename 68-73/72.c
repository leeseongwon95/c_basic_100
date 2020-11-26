// 입력 : f
// 출력 : a b c d e f

#include <stdio.h>

int main(void) {
  char a;
  int i;
  scanf("%c", &a);
  for (i = 'a'; i <= a; i++) {
    printf("%c ", i);
  }
  return 0;
}