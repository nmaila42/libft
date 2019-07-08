/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:59:06 by nmaila            #+#    #+#             */
/*   Updated: 2019/06/18 09:49:51 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *hays, const char *need)
{
	unsigned int	i;
	unsigned int	j;
	char			*haystack;
	char			*needle;

	haystack = (char *)hays;
	needle = (char *)need;
	if (needle[0] == '\0' && haystack[0] == '\0')
		return (haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
