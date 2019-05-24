/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:30:56 by nmaila            #+#    #+#             */
/*   Updated: 2019/05/24 15:31:36 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** converts the initial portion of the string pointed to
**		by str to int representation.
*/

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	neg;
	int	res;
	int	i;

	neg = 1;
	i = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
				str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		++i;
	res = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (*str[i] - 48);
		++i;
	}
	return (res * neg);
}
