void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp1;
	int tmp2;

	tmp1 = *a / *b;
	tmp2 = *a % *b;

	*a = tmp1;
	*b = tmp2;
}

// Not include the "main" it's just for test.
#include <stdio.h>

int main()
{
	int a;
	int b;

	a = 4;
	b = 8;

	ft_ultimate_div_mod(&a, &b);

	printf("the div = %d\nthe mod = %d", a, b);
	return (0);
}
