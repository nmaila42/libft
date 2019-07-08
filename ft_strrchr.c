/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:21:50 by nmaila            #+#    #+#             */
/*   Updated: 2019/06/14 11:44:25 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int			i;
	char		ltr;
	char		*str;

	ltr = (char)c;
	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	if (c == 0)
		return (str + i);
	while (i >= 0)
	{
		if (str[i] == ltr)
			return (str + i);
		i--;
	}
	return (NULL);
}
