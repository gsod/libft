/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:47:16 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/15 18:51:02 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	t;

	s = (char *)src;
	d = (char *)dst;
	t = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (t < len)
		{
			d[t] = s[t];
		t++;
		}
	}
	return (dst);
}
