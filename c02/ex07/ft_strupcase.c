char	*ft_strupcase(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

// Not include the "main" and "ft_putstr" it's just for the test.
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

int main()
{
	char str[] = "Hello W@rld!";
	
	ft_strupcase(str);

	ft_putstr(str);

	return (0);
}
