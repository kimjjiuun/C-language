// ������ ������ ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_MINUTE 60  // 1���� 60��

int main(void)
{
    int input, minute, second;
    printf("�ʸ� �Է��ϼ���: ");
    scanf("%d", &input);  // �� ������ �ð��� �Է� �޽��ϴ�.

    minute = input / SEC_PER_MINUTE;  // ���� ���
    second = input % SEC_PER_MINUTE;  // ���� �ʸ� ���

    printf("%d�ʴ� %d�� %d���Դϴ�.\n", input, minute, second);

    return 0;
}