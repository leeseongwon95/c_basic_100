// a와 b의 값이 같으면 1 , 그렇지 않으면 0

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a == b) printf("1");
  else printf("0");
  return 0;
}