#include <stdio.h>

int main(void) {
  int n, i = 0, sum = 0; 
  scanf("%d", &n);
  for (i = 1; i < n; i++) {
    if (sum < n) {
      sum += i;
    }  
  }
  printf("%d", sum);
  return 0;
}