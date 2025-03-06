/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaltaz <anbaltaz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:53:40 by anbaltaz          #+#    #+#             */
/*   Updated: 2025/03/06 08:10:45 by anbaltaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
