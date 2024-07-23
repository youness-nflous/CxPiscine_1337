void ft_swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// Not include the "main" just for the test.
#include <stdio.h>

int main()
{
	int y;
	int z;

	y = 4;
	z = 8;

	ft_swap(&y, &z);

	printf("the value of y = %d\nthe value of z = %d", y, z);
	return (0);
}
