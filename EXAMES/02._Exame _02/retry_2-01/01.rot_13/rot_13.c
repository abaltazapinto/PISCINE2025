#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	i = 0;
	int c;
	if(ac == 2)
	{
	
		while(av[1][i] != '\0')
		{
			c = av[1][i];

			if(c >= 'A' && c <= 'Z')
				c = ((c - 'A') + 13 % 26 +'A');
			if(c >= 'a' && c <= 'z')
				c = ((c - 'a') + 13 % 26 +'a');
			write(1,&c,1);
			i++;
		}
		

	}
	write(1, "\n" ,1);
	return (0);
}
		
