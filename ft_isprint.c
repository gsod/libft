/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:04:28 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/13 15:29:26 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_isprint(040));
	printf("%d", ft_isprint(041));
	printf("%d", ft_isprint(140));
	printf("%d", ft_isprint(150));
	printf("%d", ft_isprint(177));
	printf("%d", ft_isprint(170));
	printf("%d", ft_isprint(052));
	printf("%d", ft_isprint(152));
	printf("%d", ft_isprint(180));
	printf("%d", ft_isprint(190));
	printf("%d", ft_isprint(200));
	printf("%d", ft_isprint(151));
	printf("%d", ft_isprint(250));
}
*/
