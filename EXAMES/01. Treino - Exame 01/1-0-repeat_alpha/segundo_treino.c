#include <unistd.h>

int	letter_count(char)
{
	int	repeat;

	if(c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if(c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1
	return(repeat)

}
/*
int	letter_count2(char c)
{
	int repeat;

	if(c >= 'A' && c <= 'Z')
	       repeat = c - 'A' + 1;
	else if(c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat)
}	
*/
int	main(int ac, char **av)
{
	int i = 0;

	if(ac == 2)
	{
		while(*av[1])
		{
			repeat = letter_count(*av[1]);
			while (repeat--)
				write(1,av[1],1);
			av[1]++;
		}
			
	}
	ft_plutchar('\n');	
}
