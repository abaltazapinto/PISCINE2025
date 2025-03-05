
char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
		{
			str[c] = str[c] + 32;
		}
		c++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
      //imutaveis
//	char	*dest = "ANDRE";
//	char *src = "GRANDES e pequenas"; 

	//MUTAVEIS
	char dest[] = "andre";
	char src[] = "ANDRE really?";
	printf("letras todas grandes ficam pequenas: %s .\n\n", src);
	printf("str_strupcase: %s\n\n ", ft_strlowcase(src));
	printf("letras todas pequenas continuam pequenas:%s . \n\n", dest);
	printf("str_upcase: %s\n\n ", ft_strlowcase(dest));
	return (0);
}*/
