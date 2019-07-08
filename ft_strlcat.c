/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:43:29 by nmaila            #+#    #+#             */
/*   Updated: 2019/06/19 08:14:01 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *str1, const char *str2, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str1[i] && i < size)
		i++;
	while (str2[j] && (i + j + 1) < size)
	{
		str1[i + j] = str2[j];
		j++;
	}
	if (i != size)
		str1[i + j] = '\0';
	return (i + ft_strlen(str2));
}
