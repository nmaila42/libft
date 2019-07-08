/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 12:16:16 by nmaila            #+#    #+#             */
/*   Updated: 2019/06/18 09:33:24 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *hays, const char *need, size_t n)
{
	size_t	i;
	size_t	j;
	char	*haystack;
	char	*needle;

	haystack = (char *)hays;
	needle = (char *)need;
	if (needle[0] == '\0')
		return (haystack);
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j] && i + j < n)
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
