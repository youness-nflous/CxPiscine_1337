#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
// main_test
int main()
{
	ft_putchar('S');
	return (0);
}
