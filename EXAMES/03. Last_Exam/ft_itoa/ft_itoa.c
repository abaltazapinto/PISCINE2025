#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char *str;
	int len = 1;
	int tmp = nbr;	

	if (nbr < 0)
	{
		len++;
		tmp = -nbr;
	}

	while(tmp >=10)
	{
		tmp /= 10;
		len++;
	}
	str = (char *)malloc(len + +1)

	if(!str)
		return NULL;
	

	str[len] = '\0';
	if (nbr < 0)
		str[0] = '-';
	temp = (nbr<0) ? -nbr : nbr;
	while (tmp > 0)
	{
		str[--len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (str);
}
	
