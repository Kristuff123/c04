#include <stdio.h>

int		ft_strlen(char *str)
{
		int		i;

		i = 0;
		while (str[i] != '\0')
		{
				i++;
		}
		return (i);
}

int		main(void)
{
		char 	str[] = "krzysztof graczyk";
		int		length;

		length = ft_strlen(str);
		printf("length of the string: %s\n is:  %d\n", str, length);
		return (0);
}
