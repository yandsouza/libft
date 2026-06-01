/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 18:10:28 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/29 11:56:16 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	int	dec;

	dec = 1;
	if (n < 0)
		n = n * -1;
	while (n >= 10)
	{
		n = n / 10;
		dec++;
	}
	return (dec);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		dec;
	int		is_neg;
	char	*str;

	nb = n;
	is_neg = 0;
	if (nb < 0)
	{
		is_neg = 1;
		nb = nb * -1;
	}
	dec = ft_count(nb) + is_neg;
	str = malloc(dec * sizeof(char) + 1);
	if (!str)
		return (0);
	str[dec] = '\0';
	while (dec-- > is_neg)
	{
		str[dec] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
//#include <stdio.h>
//int    main(void)
//{
//    printf("%s\n", ft_itoa(-26));
//    return (0);
//}
