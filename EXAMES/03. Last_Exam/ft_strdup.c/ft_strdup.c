#include <stdlib.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(*s++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *new;
	int 	i;

	i = 0;

	if(!(new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return NULL;
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}
