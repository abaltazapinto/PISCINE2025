
int ft_atoi(const char *str)
{

	int res = 0;
	int sign = 1;

	while(*str == 32 || (*str >= 9 && *str <= 13))
		str++;

	if(*str == '-')
	{
		sign = -1;
	}

	if(*str == 43 || *str == 45)
		str++;

	while(*str >= '0' && *str <= '9')
	{
		res = (res * 10) +(*str - '0');
		str++;	
	}

	return (res * sign);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int mine;
	int theirs;

	if(ac ==2)
	{
		mine = ft_atoi(av[1]);
		theirs = atoi(av[1]);

		printf("mine %d | theirs %d \n", mine , theirs);
	}
	return (0);
}
