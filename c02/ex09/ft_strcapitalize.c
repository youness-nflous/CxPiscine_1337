char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	// Make the first character uppercase if it's lowercase letter.
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i])
	{
		// If the current charcter is alphanumeric, skip it.
		while ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			i++;
		}
		// If the current character is a space or punctuation, capitalize the next letter.
		if (str[i] && (str[i] < 'a' || str[i] > 'z'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
			i++;
		}
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char str[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";

	ft_strcapitalize(str);
	
	printf("%s", str);

	return (0);
}
