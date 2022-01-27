/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <gsodano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:14:28 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/27 22:26:06 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*d;
	size_t	i;

	i = 0;
	d = (char *)malloc(size * count);
	if (!d)
		return (0);
	while ((count * size) >= i)
	{
		((unsigned char *)d)[i] = '\0';
		i++;
	}
	return (d);
}
