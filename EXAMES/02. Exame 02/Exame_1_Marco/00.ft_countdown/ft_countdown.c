
#include <unistd.h>



int	main()
{
	char c;

	c = 57;
	while(c >= 48)
	{
		write(1, &c,1);
		c--;
	}
}
