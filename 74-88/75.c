// 원하는 문자가 나올때 까지 출력
/*
영문자 q가 출력 될 때 까지 출력
입력 : x b d j s k d q g c
출력 :
      x
      b
      d
      h
      s
      k
      q
      g
      c
*/
// #include <stdio.h>

// int main(void) {
//   char a = 1;
//   while (a != 'q') {
//     scanf("%c", &a);
//     if (a != ' ')
//       printf("%c\n", a);
//   }
//   return 0;
// }

#include <stdio.h>

int main(void) {
  char a = 1;
  while (a != 'q') {
    scanf("%c", &a);
    if (a != ' ') {
      printf("%c\n", a);
    }
  }
  return 0;
}