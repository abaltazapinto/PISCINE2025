#include <stdio.h>

int	ft_strlen(char	*str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}

	return i;
}

int	main()
{
	int comprimento = ft_strlen("VAMOS");

	printf("O comprimento da string é de %d\n", comprimento);
	return 0;
}
