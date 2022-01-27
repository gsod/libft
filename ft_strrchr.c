/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:43:16 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/14 18:01:08 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			str = (char *)(s);
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (str);
}
