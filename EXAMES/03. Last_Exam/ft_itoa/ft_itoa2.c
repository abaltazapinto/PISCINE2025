#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int nbr)
{
	char *str;
	int len;

	len = (nbr < 0) ? 1 : 0;
	long tmp = nbr;

	if(nbr <0)
		tmp = -nbr;

	long n = tmp;

	while(n >0)
	{
		n /=10;
		len++;
	}

	str = (char *)malloc(len + 1);

	if(!str)
		return NULL;

	str[len] = '\0';

	if(nbr == 0)
	{
		str[0] = '0';
		return str;
	}

	if(nbr < 0)
		str[0] = '-';

	while(tmp >0)
	{
		str[--len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

// Protótipo da sua função personalizada ft_itoa
char *ft_itoa(int n);

int main(void) {
    int test_values[] = {0, 123, -123, 2147483647, -2147483648};
    size_t num_tests = sizeof(test_values) / sizeof(test_values[0]);
    
    for (size_t i = 0; i < num_tests; i++) {
        int num = test_values[i];
        char *ft_result = ft_itoa(num);
        
        printf("Número: %d\n", num);
        printf("ft_itoa: %s\n", ft_result);
        printf("----------------------\n");
        
        free(ft_result);
    }
    
    return 0;
}
