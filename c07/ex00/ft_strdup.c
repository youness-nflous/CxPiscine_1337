#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	char *dup;

	i = 0;
	while (src[i])
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

#include <stdio.h>
int main()
{
	char str[] = "youness_anflous";

	char *dup_str = ft_strdup(str);
	
	if (dup_str != NULL)
	{
		printf("%s", dup_str);
		free(dup_str);
	} else 
	{
		printf("Memory allocation failed.");
	}
	return (0);
}
