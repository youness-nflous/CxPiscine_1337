#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int len;
	int *dup;

	if (min >= max)
		return (NULL);
	
	len = max - min;

	dup = malloc(sizeof(int) * len);
	
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = min + i;
		i++;
	}
	return (dup);
}

//int main()
//{
//	int *dup = ft_range(3, 9);
//	int i;

//	i = 0;

//	while (i < 9 - 3)
//	{
//		printf("%d", dup[i]);
//		i++;
//	}
//	free(dup);
//	return (0);
//}
