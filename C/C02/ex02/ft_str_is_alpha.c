/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaltaz <anbaltaz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:00:30 by anbaltaz          #+#    #+#             */
/*   Updated: 2025/03/06 08:15:40 by anbaltaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if ((str[n] >= 'a' && str[n] <= 'z')
			|| (str[n] >= 'A' && str[n] <= 'Z'))
		{
			n++;
		}
		else
			return (0);
	}
	return (1);
}
