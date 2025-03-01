/*

======================================./1-0-ft_strlen.txt=========================================
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
==========================================================================================
DESCRIPTION
       The strlen() function calculates the length of the string pointed to by s, excluding the termi‐
       nating null byte ('\0').

*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char	*str)
{
	int	i;
	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
    char str[] = "Hello, world!";

    // Testando ft_strlen()
    printf("Length using ft_strlen: %d\n", ft_strlen(str));

    // Testando a função strlen() padrão
    printf("Length using strlen: %lu\n", strlen(str));

    return 0;
}
