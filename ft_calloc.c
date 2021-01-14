/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:24:53 by acousini          #+#    #+#             */
/*   Updated: 2021/01/10 17:52:04 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;

	tab = (char *)malloc(nmemb * size);
	if (!(tab))
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
