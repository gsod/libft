/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <gsodano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:43:07 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/24 14:17:39 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		t;
	char	*dt;

	i = 0;
	t = 0;
	if (!s1 || !s2)
		return (0);
		dt = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!dt)
		return (0);
	while (s1[i] != '\0')
	{
		dt[t] = s1[i];
		t++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
		dt[t++] = s2[i++];
	dt[t] = '\0';
	return (dt);
}
