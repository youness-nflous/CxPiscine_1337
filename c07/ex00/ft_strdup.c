#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char *ptr;
	size_t len;

	len = 0;

	while (str[len])
	{
		len++;
	}

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);
	
	len = 0;
	while (str[len])
	{
		ptr[len] = str[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}

//int main()
//{
//	char src[] = "youness_anflous";
//	char *dup;
//	dup = ft_strdup(src);
//	printf("%s", dup);
//	free(dup);
//	return (0);
//}
