/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:27:22 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/28 13:44:27 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (0);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
