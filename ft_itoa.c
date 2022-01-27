/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <gsodano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:58:21 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/26 15:43:28 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_osize(int n, int lng, char *str)
{
	str[lng--] = '8';
	return (n / 10);
}

void	ft_trns(int i, int n, char *str)
{
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
}

int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = ft_len(n);
	str = (char *) malloc (i + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			n = ft_osize(n, i, str);
			i--;
		}
		n *= -1;
	}
	ft_trns(i, n, str);
	return (str);
}
