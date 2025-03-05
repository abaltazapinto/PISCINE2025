#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_atoi(const	char *str)
{
	int res;
	int sign;

	res = 0;
	sign = 1;

	while(*str == 32 || (*str >= 7 && *str <= 13))
	{
		str ++;
	}

	if(*str == '-')
	{
		sign *= -1;
		str++;
	}
	
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str -'0');
		str++;
	}
	return(res * sign);
}

int main(int ac, char **av)
{
        if(ac > 1)
        {
                printf("Mine atoi: %d \t " ,ft_atoi(av[1]));
                printf("atoi: %d" , atoi(av[1]));
        }
        return (0);
}

