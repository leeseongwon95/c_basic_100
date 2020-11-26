// 입력받은 년, 월, 일 을 출력한다.
// 입력 예시 : 2020.1.2
// 출력 예시 : 2020.01.02

#include <stdio.h>

int main(void) {
  int year, month, day;
  scanf("%d.%d.%d", &year, &month, &day);
  printf("%04d.%02d.%02d", year, month, day); // 한 자리만 입력받아도 앞에 0을 붙여줌
  return 0;
}