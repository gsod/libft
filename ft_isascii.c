/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:59:22 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/11 15:11:25 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_isascii(1));
	printf("%d", ft_isascii(12));
	printf("%d", ft_isascii(127));
	printf("%d", ft_isascii(200));
	printf("%d", ft_isascii(50));
	printf("%d", ft_isascii(150));
	printf("%d", ft_isascii(100));
	printf("%d", ft_isascii(85));
	printf("%d", ft_isascii(250));
	printf("%d", ft_isascii(1220));
}
*/
