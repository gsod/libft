/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 15:09:13 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/15 17:02:09 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sn;
	int		rs;
	int		i;

	i = 0;
	sn = 1;
	rs = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		sn = -sn;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rs *= 10;
		rs += (str[i] - 48);
		i++;
	}
	return (sn * rs);
}
