/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsodano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:20:22 by gsodano           #+#    #+#             */
/*   Updated: 2022/01/13 15:23:36 by gsodano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_isdigit(1));
	printf("%d", ft_isdigit('w'));
	printf("%d", ft_isdigit(12));
	printf("%d", ft_isdigit(5));
	printf("%d", ft_isdigit(7));
}
*/
