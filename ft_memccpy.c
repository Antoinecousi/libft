/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:12:44 by acousini          #+#    #+#             */
/*   Updated: 2021/01/08 15:59:03 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		stp;

	i = 0;
	stp = c;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		if ((((unsigned char *)dst)[i] = ((unsigned char *)src)[i]) == stp)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
