/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:55:11 by nmaila            #+#    #+#             */
/*   Updated: 2019/06/22 02:08:00 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t			i;
	char			*dst;
	char			*src;
	char			ltr;

	ltr = (char)c;
	dst = (char *)str1;
	src = (char *)str2;
	if (str1 == str2)
		return (dst);
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i] == ltr)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
