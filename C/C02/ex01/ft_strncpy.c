
char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	int	i;

	i = 0;

	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return dest;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char	*dest;
	unsigned int n = 4;
	char *src = "ANDRE";

	// Alocate memory para a dest ser grande o suf.
	dest = (char *)malloc(sizeof(char) * (strlen(src) + 1));

	if (dest == NULL)
	{
		printf("falhoou o armazenamento de memoria");
		return 1;
	}

	src = "ANDRE";

	printf("Original: %s\n", dest);
	ft_strncpy(dest, src,n);
	printf("copiado : %s\n", dest);

	free(dest);

	return (0);
}
*/
