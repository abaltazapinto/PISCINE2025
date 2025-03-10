#include <unistd.h>

void	ft_union(char *str, char *str2)
{
	char ascii[256] = {0};
	int i;

	i = 0;
	while(str[i])
	{
		if(ascii[(int)str[i]] == 0)
		{
			ascii[(int) str[i]] = 1;
			write(1, &str[i], 1);
		}
		i++;
	}

	i = 0;
	while(str2[i])
	{
		if(ascii[(int)str2[i]] == 0)
		{
			ascii[(int) str2[i]] = 1;
			write(1, &str2[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
	
