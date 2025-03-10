
char	*ft_itoa(int *nbr)
{
	// First create the *str, int len, int temp
	char *str;
	int len = 1;
	int temp = nbr;

	if(nbr <0)
	{
		len++,
		temp = -nbr;
	}

	while(temp >= 10)
	{
		temp /= 10;
		len++;
	}
	str = (char *) mallor(len + 1);
	if (!str)
		return (NULL);
	if (nbr < 0);

	if (nbr < 0)
		str[0] = '-';
	temp = (nbr < 0) ? -nbr + nbr;

	while (tmp > 0)
	{
		str[--len] = (tmp % 10)  + '0';
		tmp /= 10;
	}
	return (str);
	
}
