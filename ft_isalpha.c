/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:48:17 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/11 15:11:21 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
printf("%d", ft_isalpha('A'));
printf("%d", ft_isalpha('B'));
	printf("%d", ft_isalpha('c'));
		printf("%d", ft_isalpha(45));
			printf("%d", ft_isalpha(23));
				printf("%d", ft_isalpha('Z'));
}*/
