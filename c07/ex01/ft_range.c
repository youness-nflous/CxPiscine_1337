#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int size;

	i = 0;

	if (min >= max)
		return (NULL);
	
	size = max - min;

	int *range = malloc(sizeof(int) * size);
	
	if (range == NULL)
		return (NULL);

	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	range[i] = '\0';
	return (range);
}

#include <stdio.h>

int main()
{
	int i;
	int *result;
	
	i = 0;

	result = ft_range(5, 10);

	while (result[i])
	{
		printf("%d", result[i]);
		i++;
	}
	free(result);
	return (0);
}
