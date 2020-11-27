/*
다섯자리로 이루어진 한 개의 정수를 입력 받는다 (단, 10,000 <= 입력받는 수 <= 99,999)
각 자리의 수를 분리해 한 줄에 하나씩 [] 에 넣어 출력한다.
입력 예시 : 75254
출력 예시 : [70000] 
          [5000]
          [200]
          [50]
          [4]
*/

#include <stdio.h>

int main(void) {
  int a, b, c, d, e;
  scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e); // %1d 한글자씩 
  printf("[%d0000]\n[%d000]\n[%d00]\n[%d0]\n[%d]", a, b, c, d, e); // 뒤에 0을 붙여주기
  return 0;
}