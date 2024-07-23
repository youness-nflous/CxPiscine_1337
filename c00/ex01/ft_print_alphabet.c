#include <unistd.h>

void ft_print_alphabet(void)
{
	int a;

	a = 97;

	while (122 >= a)
	{
		write(1, &a, 1);
		a++;
	}
}

// main test
int main()
{
	ft_print_alphabet();
	return (0);
}
