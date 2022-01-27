/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <gsodano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:02:48 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/22 18:14:38 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*st;
	size_t	i;
	size_t	t;

	t = 0;
	i = start;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		st = (char *)malloc(ft_strlen(s));
	else
		st = (char *)malloc(len + 1);
	if (!s || !st)
		return (0);
	while (i < ft_strlen(s) && t < len)
		st[t++] = s[i++];
		st[t] = '\0';
	return (st);
}
