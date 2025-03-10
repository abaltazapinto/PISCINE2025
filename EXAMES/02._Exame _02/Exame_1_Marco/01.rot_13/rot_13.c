#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	i= 0;
	char c;
	if(ac == 2)
	{
		while(av[1][i])
		{	
			c = av[1][i];

			if((c >= 'A' && c <= 'Z'))
				c = ((c - 'A' + 13) % 26) + 'A';
			else if((av[1][i] >= 'a' && av[1][i] <= 'z'))
				c = ((c - 'a' + 13) % 26) + 'a';

			write(1,&c, 1);
		i++;
		}
	
	}
	write(1, "\n",1);
	return (0);
}
