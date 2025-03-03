
int	ft_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char *src = "ANDRE \t";
	printf("A primeira string é printavel ? %s .\n\n", src);
	printf("P r 1 != 0 a : %d\n\n ", ft_is_printable(src));
	printf("A segunda string é printavel ? %s . \n\n", dest);
	printf("P r 1 != 0 a: %d\n\n ", ft_is_printable(dest));
	return (0);
}*/
