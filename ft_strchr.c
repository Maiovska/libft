/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:08:44 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/28 17:25:31 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
		while (*s)
		{
				if (*s == (char)c)
						return ((char *)s);
				s++;
		}
		if (*s == (char)c)
				return ((char *)s);
		}
		if (*s == ((char *)s);
		return (0);
}
