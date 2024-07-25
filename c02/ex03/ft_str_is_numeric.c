int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

// Not include the "main" it's just for the test.
#include <stdio.h>

int main()
{
	char str[] = "1337";

	printf("%d", ft_str_is_numeric(str));

	return (0);
}
