/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:41:28 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/06 15:27:23 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*dst;

	dst = (char *)malloc(ft_strlen(s1) + 1);
	if (dst)
	{
		return (ft_strcpy(dst, s1));
	}
	return (NULL);
}
