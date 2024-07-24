void ft_rev_int_tab(int *tab, int size)
{
	int start;
	int end;
	int tmp;

	start = 0;
	end = size - 1;

	while (start < end)
	{
		tmp = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp;
		start++;
		end--;
	}
}

// Not include the "main" it's just for the test.
#include <stdio.h>

int main()
{
	int i;
	int size;
	int ary[] = {7, 3, 3, 1};

	i = 0;
	size = sizeof(ary) / sizeof(ary[0]);

	ft_rev_int_tab(ary, size);

	while (i < size)
	{
		printf("%d", ary[i]);
		i++;
	}
	return (0);	
}
