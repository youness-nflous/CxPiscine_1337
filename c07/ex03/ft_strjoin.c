#include <stdlib.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int j;
	int total_len;
	int fel;

	i = 0;
	j = 0;
	fel = 0;
	total_len = 0;

	if (size <= 0)
		return (NULL);
	
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * (size - 1);

	char *result = malloc(sizeof(char) * (total_len + 1));

	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[fel++] = strs[i][j];
			j++;
		}
		
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				result[fel++] = sep[j];
				j++;
			}
		}
		i++;
	}
	result[fel] = '\0';
	return (result);
}

//int main()
//{
//	int size = 2;
//	char *strs[] = {"youness", "anflous"};
//	char sep[] = "-";
//
//	char *result = ft_strjoin(size, strs, sep);
//
//	printf("%s", result);
//
//	free(result);
//
//	return (0);
//}
