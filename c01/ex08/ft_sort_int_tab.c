void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

// Not include the "main" it's just for the test.
#include <stdio.h>

int main()
{
	int i;
	int ary[] = {2, 1, 4, 7, 4, 8, 3, 6, 4, 8};
	int size;

	i = 0;
	size = sizeof(ary) / sizeof(ary[0]);

	ft_sort_int_tab(ary, size);

	while (i < size)
	{
		printf("%d", ary[i]);
		i++;
	}
	return (0);
}
