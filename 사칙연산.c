#include <stdio.h>

int main(void)
{
	int x = 20, y = 10;
	int sum, minus, mul, div;

	sum = x + y;
	minus = x - y;
	mul = x * y;
	div = x / y;

	printf("�� ���� ���� ����? = %d\n", sum);
	printf("�� ���� �� ����? = %d\n", minus);
	printf("�� ���� ���� ����? = %d\n", mul);
	printf("�� ���� ���� ����? = %d\n", div);
	return 0;

}