/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:30:20 by nmaila            #+#    #+#             */
/*   Updated: 2019/05/24 16:04:22 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** appends a copy of the null-terminated string s2 to the end of the 
**		null-terminated string s1.
** The string s1 must have sufficient space to hold the result. 
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
