
#include <unistd.h>

unsigned char swap_bits(unsigned char octect)
{
	return ((octect >> 4) | (octect << 4));
}

int	main(int ac, char **av)
{
	char c;

	if(ac !=2)
		return(1);

	c = av[1][0];
	write(1, &c,1);
	c = swap_bits(c);
	write(1, &c, 1);
	write(1, "\n",1);
	return (0);
}
