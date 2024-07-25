int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	char str[] = "hello:)";
	
	printf("%d", ft_str_is_lowercase(str));

	return (0);


}
