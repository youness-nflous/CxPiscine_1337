#include <unistd.h>

void ft_print_numbers(void)
{
	int z;

	z = 48;
	while (z <= 57)
	{
		write(1, &z, 1);
		z++;
	}
}

// main_test
int main()
{
	ft_print_numbers();
	return (0);
}
