#include <stdio.h>

int main(void)
{
	int x = 20, y = 10;
	int sum, minus, mul, div;

	sum = x + y;
	minus = x - y;
	mul = x * y;
	div = x / y;

	printf("두 수를 합한 값은? = %d\n", sum);
	printf("두 수를 뺀 값은? = %d\n", minus);
	printf("두 수를 곱한 값은? = %d\n", mul);
	printf("두 수를 나눈 값은? = %d\n", div);
	return 0;

}