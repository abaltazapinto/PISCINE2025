
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = i - 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (x >= 0)
		{
			if (((str[x] <= 47) || (str[x] >= 58 && str[x] <= 64)
					|| (str[x] >= 91 && str[x] <= 96)
					|| (str[x] >= 123 && str[x] <= 126))
				&& (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
			}
		}
		i++;
		x++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
    char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    printf("Original: %s\n", str);
    printf("Capitalizado: %s\n", ft_strcapitalize(str));
    return 0;
}*/
