#include <stdlib.h> 
#include <stdio.h>

int ft_atoi(char *str)
{
	int res;
	int sign;

	
	res = 0;
	sign = 1;

	int i = 0;
	if (str[i] == '-' || str[i] == '+')
	{ 
		if(str[i] == '-')
			sign = -1;
		i++;
	}

	while(str[i] == 32 || str[i] >=7 && str[i] <= 13)
	{
		i++;
	}

	while(str[i] >= '0'  && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
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
