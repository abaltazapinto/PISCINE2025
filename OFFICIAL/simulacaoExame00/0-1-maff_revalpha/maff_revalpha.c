#include <unistd.h>

int main()
{
	char i = 'z';

	while(i >= 'a')
	{
		if((i - 'a') % 2 ==  0)
		{
			char upper_i = i - 32;
			write(1, &upper_i, 1);
		}
		else
		{
			write(1,&i,1);
		}
	i--;
	}
	return 0;
}

