/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:31:21 by nmaila            #+#    #+#             */
/*   Updated: 2019/05/23 10:47:25 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The functions lexicographically compare the null-terminated
 *		strings s1 and s2.
 * Compares not more than n characters.  
 * Designed for comparing strings rather than binary data,
 * characters that appear after a `\0' character are not compared.
 */

int     ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;
	size_t			result;

	if (n == 0)
		return (0);

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	result = 0;
	while ((ptr1[i] || ptr2[i]) && i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			result = (ptr1[i] - ptr2[i]);
			break;
		}
		i++;
	}
	return (result);
}
