#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if(n == -2147483648){
		write(1,"-2147483648",11);
		return;
	}

	if (n < 0) {
		ft_putchar('-');
		n = -n;
	}

	if(n > 9)
	{
		ft_putnbr(n/10);
	}
	ft_putchar((n % 10) + '0');
}

int	main()
{
	int i;
	i = 1;
	
	int max = 100;

	while(i <= max)
	{
		if(i % 3 == 0 && i % 5 == 0){
			write(1,"fizzbuzz\n",9);

		}
		else if(i % 5 == 0 ){
			write(1, "buzz\n", 5);

		}
		else if (i % 3 == 0){
			write(1, "fizz\n", 5);

		}
		else {
			ft_putnbr(i);
			write(1, "\n",1);
		}
		i++;
	}

	return (0);
}
