/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 17:08:17 by acousini          #+#    #+#             */
/*   Updated: 2021/01/15 16:55:06 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_occur(char str, char charset)
{
	if (str == charset)
		return (1);
	return (0);
}

static int		ft_get_size(const char *str, char charset)
{
	int		size;

	size = 0;
	while (*str)
	{
		if (ft_occur(*str, charset) == 0)
		{
			size++;
			while (*str && ft_occur(*str, charset) == 0)
				str++;
		}
		str++;
	}
	return (size);
}

static void		ft_strcpy22(char *dst, const char *copy, const char *until)
{
	while (copy < until)
		*(dst++) = *(copy++);
	*dst = '\0';
}

char			**ft_split(char const *s, char c)
{
	char		**copy;
	int			i;
	const char	*from;

	i = 0;
	if (!s)
		return (NULL);
	copy = ((char**)malloc(sizeof(char*) * (ft_get_size(s, c)) + 1));
	if (!copy)
		return (NULL);
	while (*s)
	{
		if (ft_occur(*s, c) == 0)
		{
			from = s;
			while (*s && ft_occur(*s, c) == 0)
				s++;
			copy[i] = (char*)malloc(s - from + 1);
			ft_strcpy22(copy[i++], from, s);
		}
		if (*s)
			s++;
	}
	copy[i] = NULL;
	return (copy);
}
