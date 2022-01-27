/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <gsodano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 15:19:08 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/22 15:46:44 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t;
	unsigned char	*b;

	if (!n)
		return (0);
	t = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (*t == *b && --n)
	{
		t++;
		b++;
	}
	return (*t - *b);
}
