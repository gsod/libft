/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <gsodano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:46:53 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/22 15:58:15 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	t;
	size_t	b;

	t = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[t] != '\0')
	{
		b = 0;
		while (haystack[t + b] == needle[b] && (t + b) < len)
		{
			if (needle [b + 1] == '\0')
				return ((char *)&haystack[t]);
			b++;
		}
		t++;
	}
	return (0);
}
