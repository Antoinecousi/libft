/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acousini <acousini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:12:40 by acousini          #+#    #+#             */
/*   Updated: 2021/01/12 18:21:48 by acousini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*copy;

	copy = *lst;
	if (!del)
		return  ;
	while (copy->next)
	{
		del((*lst)->content);
		copy = *lst;
		*lst = copy->next;
		free(copy);
	}
	*lst = NULL;
}
