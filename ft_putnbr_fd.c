/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynascime <yannssouza@outlook.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:27:25 by ynascime          #+#    #+#             */
/*   Updated: 2026/05/29 11:53:59 by ynascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	str[10];
	int		i;
	long	l;

	if (n == 0)
		write(fd, "0", 1);
	l = n;
	if (l < 0)
	{
		write(fd, "-", 1);
		l = l * -1;
	}
	i = 0;
	while (l > 0)
	{
		str[i++] = (l % 10) + '0';
		l = l / 10;
	}
	while (i > 0)
		write(fd, &str[--i], 1);
}
