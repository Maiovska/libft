/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:15:20 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/27 16:51:23 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	char	*set;
	size_t	i;

	set = s;
	i = 0;
	while (i < n)
	{
		set[i] = (char)c;
		i++;
	}
	return (s);
}
