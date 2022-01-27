/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <gsodano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:18:39 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/26 18:01:11 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_gword(const char *s, char c)
{
	size_t	r;

	r = 0;
	while (*s)
	{
		if (*s != c)
		{
			++r;
			while (*s && *s != c)
			++s;
		}
		else
		++s;
	}
	return (r);
}

char	**ft_split(const char *s, char c)
{
	char	**r;
	size_t	a;
	size_t	len;

	if (!s)
		return (0);
	a = 0;
	r = malloc(sizeof(char *) * (ft_gword(s, c) + 1));
	if (!r)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
			++s;
			r[a++] = ft_substr(s - len, 0, len);
		}
		else
		++s;
	}
	r[a] = 0;
	return (r);
}
