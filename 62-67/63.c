// 정수 3개 입력받아서 짝/홀 출력하기

#include <stdio.h>

int main(void) {
  int i, a[3];
  scanf("%d %d %d", &a[0], &a[1], &a[2]);
  for (i = 0; i < 3; i++) {
    if (a[i] % 2 == 0) printf("even\n");
    else printf("odd\n");
  } 
  return 0;
}