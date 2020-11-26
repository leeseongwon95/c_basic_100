// 0이 나올때까지 무한 출력

#include <stdio.h>

int main(void) {
  int a = -1;
  while (a != 0) {
    scanf("%d", &a);
    printf("%d\n", a);
  }
  
  return 0;
}