// ������ ������ ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_MINUTE 60  // 1���� 60��


int main(void) {
    int x = 10, y = 10;

    printf("x=%d\n", x);
    printf("++x�� ��=%d\n", ++x);  // ���� ���� �����ڸ� ����Ͽ� x�� ���� ������Ű�� ���
    printf("x=%d\n\n", x);        // ������ x�� ���� ���

    printf("y=%d\n", y);
    printf("y++�� ��=%d\n", y++);  // ���� ���� �����ڸ� ����Ͽ� y�� ����� �� ������Ŵ
    printf("y=%d\n", y);          // ������ y�� ���� ���

    return 0;
}