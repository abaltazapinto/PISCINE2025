#include <stdlib.h>

int	ft_abs(int n)
{
	return (n >= 0 ? n : -n);
}

int	*ft_range(int start, int end)
{
	int	*result;
	unsigned int size;
	unsigned int 	i;
	int	direction;

	size = ft_abs(start - end);
	result = (int *)malloc(sizeof(*result) * (size + 1));
	direction = (start > end) ? -1 : 1;
	i = 0;
	while (i <= size)
	{
		result [i] = start + (i * direction);
		i++;
	}
	return (result);
}
#include <stdio.h>

int main()
{
    int start = 5, end = 1;
    int *arr = ft_range(start, end);
    
    if (arr)
    {
        for (int i = 0; i < ft_abs(start - end) + 1; i++)
            printf("%d ", arr[i]);
        free(arr); // Liberar memória alocada
    }
    
    return 0;
}
