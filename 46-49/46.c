// a 가 b 보다 클 경우 1 출력, 아니면 0 출력

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if (a > b) printf("1");
  else printf("0"); 
}