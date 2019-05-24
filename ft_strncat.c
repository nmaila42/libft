/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:49:42 by nmaila            #+#    #+#             */
/*   Updated: 2019/05/23 10:39:12 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * appends a copy of the null-terminated string s2 to the end of the 
		null-terminated string s1
 * appends not more than n characters from s2, and then adds a
		 terminating `\0'.
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	j = 0;
	while (s2[j] && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
