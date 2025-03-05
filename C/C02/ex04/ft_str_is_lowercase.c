
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char	*dest = "andre";
	char *src = "ANDRE";
	printf("A primeira string é: %s .\n\n", src);
	printf("Se string so tiver letras pequenas retornará 1 se nao 
retornara 0 ---> resposta : %d\n\n ", ft_str_is_lowercase(src));
	printf("A segunda string é: %s . \n\n", dest);
	printf("a string so tiver letras pequenas retornará 1 se nao
 retornara 0 ----> resposta: %d\n\n ", ft_str_is_lowercase(dest));

	return (0);
}*/
