char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// Not include the "main" it's just for the test.
#include <stdio.h>

int main()
{
	char src[] = "Hello World1";
	char dest[15];

	ft_strncpy(dest, src, 5);

	printf("src => %s\n", src);
	printf("dest => %s\n", dest);

	return (0);
}
