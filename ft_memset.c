/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:25:45 by nmaila            #+#    #+#             */
/*   Updated: 2019/06/22 02:09:05 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*veg;

	i = 0;
	veg = (unsigned char *)b;
	if (n == 0)
		return (b);
	while (i < n)
	{
		veg[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
