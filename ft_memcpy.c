/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:14:49 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/28 11:48:05 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (0);
	d = (unsigned char) *dst;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
