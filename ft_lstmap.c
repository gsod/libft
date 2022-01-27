/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <gsodano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:08:41 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/27 22:23:15 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*elem;

	if (lst == NULL)
		return (NULL);
	newlst = NULL;
	while (lst)
	{	
		elem = ft_lstnew(((*f)(lst->content)));
		if (elem == NULL)
			ft_lstclear(&elem, (*del));
		else
			ft_lstadd_back(&newlst, elem);
		lst = lst->next;
	}
	return (newlst);
}
