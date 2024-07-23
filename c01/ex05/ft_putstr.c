#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

// Not include the "main" it's just for test.
int main()
{
	char string[] = "keep going";
	ft_putstr(string);
	return (0);
}
