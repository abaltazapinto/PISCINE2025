/*
======================================./1-0-ft_strcpy.txt=========================================
Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions: 
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);
==========================================================================================
*/

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	//i make an int i 
	int i;

	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}

	s1[i] = '\0';
	return s1;
}
