// 문자 입력받아 평가하기
/*
A : best!!!
B : good!!
C : run!
D : slowly~
나머지 문자 : what?
*/
#include <stdio.h>

int main(void) {
  char c;
  scanf("%c", &c);
  switch(c) {
    case('A'): printf("best!!!"); break;
    case('B'): printf("good!!"); break;
    case('C'): printf("run!"); break;
    case('D'): printf("slowly~"); break;
    default: printf("what?");  
  }
  return 0;
}