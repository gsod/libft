/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:27:58 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/13 15:14:18 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_isalnum('1'));
	printf("%d", ft_isalnum('2'));
	printf("%d", ft_isalnum('3'));
	printf("%d", ft_isalnum('11'));
	printf("%d", ft_isalnum('A'));
	printf("%d", ft_isalnum('Z'));
}
*/
