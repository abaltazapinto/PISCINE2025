/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaltaz <anbaltaz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:01:00 by anbaltaz          #+#    #+#             */
/*   Updated: 2025/03/02 16:02:44 by anbaltaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main()
{
	char	*dest;
        
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
	ft_strcpy(dest, src);
	printf("copiado : %s\n", dest);

	free(dest);

	return (0);
}	
*/
