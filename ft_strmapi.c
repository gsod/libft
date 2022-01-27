/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <gsodano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:30:58 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/24 15:55:29 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dt;

	i = 0;
	if (!s || !f)
		return (0);
		dt = (char *)malloc(sizeof(char) * strlen(s) + 1);
	if (!dt)
		return (0);
	while (s[i] != '\0')
	{
		dt[i] = f(i, s[i]);
		i++;
	}
	dt[i] = '\0';
	return (dt);
}
