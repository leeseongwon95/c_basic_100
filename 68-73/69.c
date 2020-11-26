// n 개만큼 숫자를 입력 

#include <stdio.h>

int main(void) {
  int i, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    printf("%d\n", x);
  }
  return 0;
}