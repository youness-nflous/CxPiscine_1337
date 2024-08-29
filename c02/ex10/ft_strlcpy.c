unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

#include <stdio.h>
int main()
{
	unsigned int size;
	char src[] = "hello, world";
	char dest[size];
	size = sizeof(dest) / sizeof(dest[0]);
	
	ft_strlcpy(dest, src, size);

	printf("%s", dest);

	return (0);
}
