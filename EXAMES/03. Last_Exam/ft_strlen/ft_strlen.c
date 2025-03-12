int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int main(int ac, char **av)
{
	printf("Andre tem %d letras", ft_strlen("ANDRE"));
}
