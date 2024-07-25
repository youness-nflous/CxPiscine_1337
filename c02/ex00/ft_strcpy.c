char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// Not include the "main" it's just for the test.
#include <stdio.h>

int main()
{
	char src[] = "Hello, World!";
	char dest[15];

	ft_strcpy(dest, src);

	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);

	return (0);
}
