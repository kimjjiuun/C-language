#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
 {  int x, y, result;
    printf("�� ���� ������ �Է��ϼ���: ");  // ����ڿ��� �Է��� ��û�ϴ� �޽��� ���
    scanf("%d %d", &x, &y);                // �� ���� ������ ����ڷκ��� �Է¹���

    result = x + y;                        // ���� ����� result ������ ����
    printf("%d + %d = %d\n", x, y, result); // ���� ��� ���

    result = x - y;                        // ���� ����� result ������ ����
    printf("%d - %d = %d\n", x, y, result); // ���� ��� ���

    result = x * y;                        // ���� ����� result ������ ����
    printf("%d * %d = %d\n", x, y, result); // ���� ��� ���

    result = x / y;                        // ������ ����� result ������ ����
    printf("%d / %d = %d\n", x, y, result); // ������ ��� ���

    result = x % y;                        // ������ ���� ����� result ������ ����
    printf("%d %% %d = %d\n", x, y, result); // ������ ���� ��� ���

    return 0;
}