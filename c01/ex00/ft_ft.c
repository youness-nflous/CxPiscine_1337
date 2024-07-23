
void ft_ft(int *nbr)
{
	*nbr = 42;
}

// Not include the "main" just for test.
# include <stdio.h>

int main()
{
	int nb;

	nb = 13;

	ft_ft(&nb);

	printf("%d", nb);
	return (0);
}
