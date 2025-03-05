char	*ft_itoa(int nbr)
{
	int	 len = (nbr <= 0);
	int 	temp = nbr;
	char 	*str;

	while (tmp && ++len)
		temp /= 10; 

	str = (char *)malloc(len + 1);
	if (nbr < 0)
		str[0] = '-';
	while(len-- && (nbr || str[len] == '-'))
	{
		str[len] = '0' + (nbr % 10) * (nbr < 0 ? -1 : 1);
		nbr /= 10;
	}
	return (str)
}

// outra forma

int	count_digits(int nbr) {
	int count = 0;
	if (nbr <= 0) {
		count = 1;
	}
	while (nbr != 0) {
		nbr /= 10;
		count++;
	}
	return count;
}

char *ft_itoa(int nbr)
{
	int len = count_digits(nbr);
	char *str = (char *)malloc(len + 1);
	if (!str)
	{
		return NULL;
	}
	str[len] = '\0';
	
	// Lidar com o numero zero
	if(nbr == 0)
	{
		str[0] = '0';
		return str;
	}

	// Lidar com numeros negativos
	int is_negative = 0;
	if (nbr < 0) {
		is_negative = 1;
		nbr = -nbr;
	}

	//Preencher a string com os digitos correspondentes
	while (nbr > 0) {
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}

	if (is_negative) {
		str[0] = '-';
	}

	return str;
} 
