// 나머지 연산자 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_MINUTE 60  // 1분은 60초

int main(void)
{
    int input, minute, second;
    printf("초를 입력하세요: ");
    scanf("%d", &input);  // 초 단위의 시간을 입력 받습니다.

    minute = input / SEC_PER_MINUTE;  // 분을 계산
    second = input % SEC_PER_MINUTE;  // 남은 초를 계산

    printf("%d초는 %d분 %d초입니다.\n", input, minute, second);

    return 0;
}