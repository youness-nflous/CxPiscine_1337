int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
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
	char str[] = "Hello;)";

	printf("%d", ft_str_is_alpha(str));

	return (0);
}
