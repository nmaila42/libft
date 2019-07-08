/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:08:34 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/06 15:29:55 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		j;
	char	*dst;

	if (!str1 || !str2)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * ft_strlen(str1) + ft_strlen(str2) + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		dst[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		dst[i + j] = str2[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}
