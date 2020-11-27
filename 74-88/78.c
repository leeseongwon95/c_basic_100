/*
16 진수 구구단
입력 : B
출력 : B*1=B
      B*2=16
      B*3=21
      B*4=2C
      B*5=37
      B*6=42
      B*7=4D
      B*8=58
      B*9=63
      B*A=6E
      B*B=79
      B*C=84
      B*D=8F
      B*E=9A
      B*F=A5
*/

#include <stdio.h>

int main(void) {
  int a, i;
  scanf("%X", &a);
  for (i = 1; i < 16; i++) {
    printf("%X * %X = %X\n", a, i, a * i);
  }
  return 0;
}