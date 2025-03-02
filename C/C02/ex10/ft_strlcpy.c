int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char src[] = "Exemplo de string para copiar.";
    unsigned int limit = 20; // Limitado
    char dest[50]; // Buff dest
    
    unsigned int len = ft_strlcpy(dest, src, limit);
    
    printf("Original: %s\n", src);
    printf("Copiado (com limite a %u caracteres): %s\n", limit, dest);
    printf("Comprimento total da string original: %u\n", len);
    
    return 0;
}*/
