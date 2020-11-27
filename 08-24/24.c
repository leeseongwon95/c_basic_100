/*
년도를 . 으로 입력받고 - 로 출력한다
입력 예시 : 2020.07.15
출력 예시 : 15-07-2020
*/

#include <stdio.h>

int main(void) {
  int year, month, day;
  scanf("%d.%d.%d", &year, &month, &day);
  printf("%02d-%02d-%04d", day, month, year); // 빈 칸은 0으로
  return 0;
}