int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

// Not include the "main" it's just for test.
#include <stdio.h>

int main()
{
	char string[] = "keep going";
	printf("the len of \"%s\" = %d", string, ft_strlen(string));
	return (0);
}
