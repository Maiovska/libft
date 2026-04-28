/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaiovsk <hmaiovsk@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:30:39 by hmaiovsk          #+#    #+#             */
/*   Updated: 2026/04/28 17:40:46 by hmaiovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(cont char *s, int c)
{
		char	*last;

		last = 0;
		while (*s)
		{
				if (*s == (char)c)
						last = (char *)s;
				s++;
		}
		if (*s == (char)c)
				return ((char *)s);
		return (last);
}
