// 주민등록번호 입력 받아 형태 바꿔 출력하기
// 입력 : 주민등록번호 앞 6자리와 뒤 7자리가 '-' 으로 구분되어 입력됨
// 출력 : "-"를 제외한 주민등록번호 13자리를 모두 붙여 출력한다.


#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d-%d", &a, &b);
  printf("%06d%07d", a, b); // 비어있는자리는 0으로 채워줘야 함
  return 0;
}