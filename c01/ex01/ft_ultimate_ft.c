void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// Not include the "main" it's just for the test.
#include <stdio.h>

int main()
{
	int nbr;
	int *nbr1;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;
	int *********nbr9;
	
	// it will change the value of it
	nbr = 1337;

	nbr1 = &nbr;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;

	ft_ultimate_ft(nbr9);
	
	printf("%d", nbr);

	return (0);
}
