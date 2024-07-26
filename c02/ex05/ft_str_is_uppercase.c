int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}

// Not include "ft_result" it's just for the test.
// i want to use "write".
#include <unistd.h>

char	ft_result(void)
{
	char str[] = "HELLO";
	char re;

	re = ft_str_is_uppercase(str) + '0';

	write(1, &re, 1);
}

// Not include "main" it's just for the test.
int main()
{
	ft_result();
	return (0);
}
