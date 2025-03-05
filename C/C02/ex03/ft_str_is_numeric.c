
int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < '0' || str[c] > '9'))
			return (0);
			c++;
	}
	return (1);
}/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char	*dest = "1234";
	char *src = "ANDRE";
	printf("A primeira string é: %s .\n\n", src);
	printf("Se string so tiver numericos retornará 1 se nao retornara 0 ---> resposta : %d\n\n ", ft_str_is_numeric(src));
	printf("A segunda string é: %s . \n\n", dest);
	printf("a string so tiver numericos retornará 1 se nao retornara 0 ----> resposta: %d\n\n ", ft_str_is_numeric(dest));

	return (0);
}*/

