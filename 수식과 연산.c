#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
 {  int x, y, result;
    printf("두 개의 정수를 입력하세요: ");  // 사용자에게 입력을 요청하는 메시지 출력
    scanf("%d %d", &x, &y);                // 두 개의 정수를 사용자로부터 입력받음

    result = x + y;                        // 덧셈 결과를 result 변수에 저장
    printf("%d + %d = %d\n", x, y, result); // 덧셈 결과 출력

    result = x - y;                        // 뺄셈 결과를 result 변수에 저장
    printf("%d - %d = %d\n", x, y, result); // 뺄셈 결과 출력

    result = x * y;                        // 곱셈 결과를 result 변수에 저장
    printf("%d * %d = %d\n", x, y, result); // 곱셈 결과 출력

    result = x / y;                        // 나눗셈 결과를 result 변수에 저장
    printf("%d / %d = %d\n", x, y, result); // 나눗셈 결과 출력

    result = x % y;                        // 나머지 연산 결과를 result 변수에 저장
    printf("%d %% %d = %d\n", x, y, result); // 나머지 연산 결과 출력

    return 0;
}