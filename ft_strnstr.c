/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 13:39:51 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/05/04 15:58:27 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t length)
{
	char	*to_return;
	size_t	i;
	size_t	j;

	i = 0;
	if (!big)
		return (0);
	if (!little)
		return (big);
	while (big[i])
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && j < length)
			{
				if (big[i + j] == little[j]
				{
					if (!little[j + 1] || j == length)
						return (&big[i]);
					j++;
				}
				else
					break ;
			}
		}
		else
			i++;
	}
	
	return (to_return);
}
