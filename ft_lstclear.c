/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <gsodano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:27:47 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/27 18:55:49 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		i = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = i;
	}
}
