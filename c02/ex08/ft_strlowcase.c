char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
// Not include "main" and "ft_putstr" it's just for the test.
#include <unistd.h>
void	ft_putstr(char *str)
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
	char str[] = "hELLO w@RLD!";

	ft_strlowcase(str);

	ft_putstr(str);

	return (0);
}
