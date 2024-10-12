// 나머지 연산자 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_MINUTE 60  // 1분은 60초


int main(void) {
    int x = 10, y = 10;

    printf("x=%d\n", x);
    printf("++x의 값=%d\n", ++x);  // 전위 증가 연산자를 사용하여 x를 먼저 증가시키고 출력
    printf("x=%d\n\n", x);        // 증가된 x의 값을 출력

    printf("y=%d\n", y);
    printf("y++의 값=%d\n", y++);  // 후위 증가 연산자를 사용하여 y를 출력한 후 증가시킴
    printf("y=%d\n", y);          // 증가된 y의 값을 출력

    return 0;
}