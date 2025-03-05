
int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (*str != '\0')
	{
		if (!((str[c] >= 65 && str[c] <= 90)
				|| (str[c] >= 97 && str[c] <= 122)))
			return (1);
		else
			return (0);
	}
}
/*

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

int	main()
{
	char	*dest = "1234$:";
	char *src = "ANDRE";
	printf("A primeira string é: %s .\n\n", src);
	printf("Se string se tiver alfa-numericos retornará 1
se nao retornara 0 : %d\n\n ", ft_str_is_alpha(src));
	printf("A segunda string é: %s . \n\n", dest);
	printf("a string se tiver alfa-numericos retornará 1
se nao retornara 0 : %d\n\n", ft_str_is_alpha(dest));

	return (0);
}*/
