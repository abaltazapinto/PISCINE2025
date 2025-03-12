
#include <unistd.h>

int	main(void)
{
	
	char a = 'a';
	char c;

	while(a <= 'z')
	{
		if((a - 'a') % 2 == 0)
			c = a;
		else
			c = a - 32;

		write(1, &c, 1);
		a++;
	}
	write(1, "\n",1);	
	return (0);
}
