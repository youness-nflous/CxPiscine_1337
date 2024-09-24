char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == '\0')
		return (NULL);
	
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

//int main()
//{
//	char st[] = "younessanflous";
//	char to_find[] = "anf";
//	char *str = ft_strstr(st, to_find);
//
//	printf("%s", str);
//
//	return (0);
//}
