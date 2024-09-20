#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;

	i = 0;

	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}

	len = max - min;

	*range = malloc(sizeof(int) * len);

	if (*range == NULL)
		return (-1);

	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}

//#include <stdio.h>
//int main()
//{
//	int *ptr;
//	int size;
//	int i;
//
//	i = 0;
//
//	size = ft_ultimate_range(&ptr, 3, 9);
//
//	while (i < size)
//	{
//		printf("%d", ptr[i]);
//		i++;
//	}
//	free(ptr);
//	return (0);
//}
