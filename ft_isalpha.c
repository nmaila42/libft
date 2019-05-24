/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:32:31 by nmaila            #+#    #+#             */
/*   Updated: 2019/05/24 15:40:13 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tests for any character for which isupper(3) or islower(3) is true.
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
