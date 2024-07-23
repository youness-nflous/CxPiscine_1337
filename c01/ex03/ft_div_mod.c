void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// Not include the "main" it's just for the test.
#include <stdio.h>

int main()
{
	int a;
	int b;
	int div1;
	int mod1;

	a = 4;
	b = 8;

	ft_div_mod(a, b, &div1, &mod1);

	printf("div of %d by %d = %d\nmod of %d by %d = %d", a, b, div1, a, b, mod1);
	return (0);
}
